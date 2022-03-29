/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F1789
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RC1 procedures
#define RC1_SetHigh()    do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()   do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()   do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()         PORTCbits.RC1
#define RC1_SetDigitalInput()   do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()  do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()     do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()   do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode() do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()    do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()   do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()   do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()         PORTCbits.RC2
#define RC2_SetDigitalInput()   do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()  do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()     do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()   do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode() do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set SCL aliases
#define SCL_TRIS               TRISCbits.TRISC3
#define SCL_LAT                LATCbits.LATC3
#define SCL_PORT               PORTCbits.RC3
#define SCL_WPU                WPUCbits.WPUC3
#define SCL_ANS                ANSELCbits.ANSC3
#define SCL_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCL_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCL_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCL_GetValue()           PORTCbits.RC3
#define SCL_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCL_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define SCL_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define SCL_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCL_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDA aliases
#define SDA_TRIS               TRISCbits.TRISC4
#define SDA_LAT                LATCbits.LATC4
#define SDA_PORT               PORTCbits.RC4
#define SDA_WPU                WPUCbits.WPUC4
#define SDA_ANS                ANSELCbits.ANSC4
#define SDA_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDA_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDA_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDA_GetValue()           PORTCbits.RC4
#define SDA_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDA_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define SDA_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define SDA_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define SDA_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set IO_RD0 aliases
#define IO_RD0_TRIS               TRISDbits.TRISD0
#define IO_RD0_LAT                LATDbits.LATD0
#define IO_RD0_PORT               PORTDbits.RD0
#define IO_RD0_WPU                WPUDbits.WPUD0
#define IO_RD0_ANS                ANSELDbits.ANSD0
#define IO_RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IO_RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IO_RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IO_RD0_GetValue()           PORTDbits.RD0
#define IO_RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IO_RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IO_RD0_SetPullup()      do { WPUDbits.WPUD0 = 1; } while(0)
#define IO_RD0_ResetPullup()    do { WPUDbits.WPUD0 = 0; } while(0)
#define IO_RD0_SetAnalogMode()  do { ANSELDbits.ANSD0 = 1; } while(0)
#define IO_RD0_SetDigitalMode() do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set IO_RD1 aliases
#define IO_RD1_TRIS               TRISDbits.TRISD1
#define IO_RD1_LAT                LATDbits.LATD1
#define IO_RD1_PORT               PORTDbits.RD1
#define IO_RD1_WPU                WPUDbits.WPUD1
#define IO_RD1_ANS                ANSELDbits.ANSD1
#define IO_RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IO_RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IO_RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IO_RD1_GetValue()           PORTDbits.RD1
#define IO_RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IO_RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IO_RD1_SetPullup()      do { WPUDbits.WPUD1 = 1; } while(0)
#define IO_RD1_ResetPullup()    do { WPUDbits.WPUD1 = 0; } while(0)
#define IO_RD1_SetAnalogMode()  do { ANSELDbits.ANSD1 = 1; } while(0)
#define IO_RD1_SetDigitalMode() do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set IO_RD2 aliases
#define IO_RD2_TRIS               TRISDbits.TRISD2
#define IO_RD2_LAT                LATDbits.LATD2
#define IO_RD2_PORT               PORTDbits.RD2
#define IO_RD2_WPU                WPUDbits.WPUD2
#define IO_RD2_ANS                ANSELDbits.ANSD2
#define IO_RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_RD2_GetValue()           PORTDbits.RD2
#define IO_RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_RD2_SetPullup()      do { WPUDbits.WPUD2 = 1; } while(0)
#define IO_RD2_ResetPullup()    do { WPUDbits.WPUD2 = 0; } while(0)
#define IO_RD2_SetAnalogMode()  do { ANSELDbits.ANSD2 = 1; } while(0)
#define IO_RD2_SetDigitalMode() do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set RE0 procedures
#define RE0_SetHigh()    do { LATEbits.LATE0 = 1; } while(0)
#define RE0_SetLow()   do { LATEbits.LATE0 = 0; } while(0)
#define RE0_Toggle()   do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define RE0_GetValue()         PORTEbits.RE0
#define RE0_SetDigitalInput()   do { TRISEbits.TRISE0 = 1; } while(0)
#define RE0_SetDigitalOutput()  do { TRISEbits.TRISE0 = 0; } while(0)
#define RE0_SetPullup()     do { WPUEbits.WPUE0 = 1; } while(0)
#define RE0_ResetPullup()   do { WPUEbits.WPUE0 = 0; } while(0)
#define RE0_SetAnalogMode() do { ANSELEbits.ANSE0 = 1; } while(0)
#define RE0_SetDigitalMode()do { ANSELEbits.ANSE0 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/