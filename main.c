
#include "mcc_generated_files/mcc.h"

#define NUNCHUCK_ADDR   0x52    // Nunchuck I2C slave address
#define JOY_OFF     14          // Joystick offset
#define DEAD_ZONE   30          // Radius of the joystick's deadzone
#define IDLE_PWM    46          // Value of PWM signal when idle
#define TRIGGER_HIGH    63      // Value of PWM signal for the trigger servo
                                // when high

// Macros for joystick input
#define X_JOY       nunchuck_data[0]
#define Y_JOY       nunchuck_data[1]
#define X_ACCEL     nunchuck_data[2]
#define Y_ACCEL     nunchuck_data[3]
#define Z_ACCEL     nunchuck_data[4]
#define C_BUT       !((nunchuck_data[5] >> 1) & 0x01)
#define Z_BUT       !(nunchuck_data[5] & 0x01)

// Constants
static const uint8_t request_data[1] = { 0x00 };
static const uint8_t handshake_signal[2] = { 0x40, 0x00 };
static const uint8_t disable_encryption[4] = { 0xF0, 0x55, 0xFB, 0x00 };


/* Main function */
void main(void)
{
    // Variables declaration
    volatile uint8_t tmp = 0;
    volatile uint8_t prev_z = 0;
    volatile uint8_t prev_c = 0;
    volatile uint8_t nunchuck_data[6] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05 };
    I2C_MESSAGE_STATUS status = I2C_MESSAGE_PENDING;
    
    // Initialize the device
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    RD0 = 1;
    __delay_ms(500);
    RD1 = 1;
    __delay_ms(500);
    RD2 = 1;
    __delay_ms(500);
    
    // Initial values
    RD0 = 0;
    RD1 = 0;
    RD2 = 0;
    
    while(1)
    {   
        // Perform handshake with the nunchuck
        I2C_MasterWrite(handshake_signal, 2, NUNCHUCK_ADDR, &status);
        while(status == I2C_MESSAGE_PENDING);
        __delay_us(250);
        
        // Disable encryption
        I2C_MasterWrite(disable_encryption, 2, NUNCHUCK_ADDR, &status);
        while(status == I2C_MESSAGE_PENDING);
        __delay_us(250);
        I2C_MasterWrite(disable_encryption + 2, 2, NUNCHUCK_ADDR, &status);
        while(status == I2C_MESSAGE_PENDING);
        __delay_us(250);
    
        // Set nunchuck register pointer
        I2C_MasterWrite(request_data, 1, NUNCHUCK_ADDR, &status);
        while(status == I2C_MESSAGE_PENDING);
        __delay_us(250);
        
        // Read nunchuck data
        I2C_MasterRead(nunchuck_data, 6, NUNCHUCK_ADDR, &status);
        while(status == I2C_MESSAGE_PENDING);
        
        // Set debug LEDs
        RD1 = Z_BUT;
        RD2 = C_BUT;
        
        // Initiate fire sequence if the Z button is pressed
        if(Z_BUT && !prev_z)
        {
            // Pull trigger
            PWM3_LoadDutyValue(TRIGGER_HIGH);
            
            // Reset timer and start it
            TMR1_Reload();
            TMR1_StartTimer();
        }
        prev_z = Z_BUT;
        
        // Toggle laser if the C button is pressed
        if(C_BUT && !prev_c)
            RD0 = !RD0;
        prev_c = C_BUT;
        
        // First servo
        if(X_JOY > 128 + DEAD_ZONE)
            tmp = ((X_JOY - DEAD_ZONE) >> 2) + JOY_OFF;
        else if(X_JOY < 128 - DEAD_ZONE)
            tmp = ((X_JOY + DEAD_ZONE) >> 2) + JOY_OFF;
        else
            tmp = IDLE_PWM;
        PWM1_LoadDutyValue(tmp);
        
        // Second servo
        if(Y_JOY > 128 + DEAD_ZONE)
            tmp = ((Y_JOY - DEAD_ZONE) >> 2) + JOY_OFF;
        else if(Y_JOY < 128 - DEAD_ZONE)
            tmp = ((Y_JOY + DEAD_ZONE) >> 2) + JOY_OFF;
        else
            tmp = IDLE_PWM;
        PWM2_LoadDutyValue(tmp);
        
        __delay_us(250);
    }
}
