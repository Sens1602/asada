
#include <p18f2553.h>
#include <stdio.h>
#include <stdlib.h>
#include <delays.h>

#pragma config PLLDIV=2             // 8 MHz ???
#pragma config CPUDIV=OSC1_PLL2     // 96 MHz
#pragma config USBDIV=2             // 48 MHz
#pragma config FOSC=INTOSC_XT
#pragma config PWRT=ON
#pragma config BOR=OFF
#pragma config BORV=2
#pragma config VREGEN=ON
#pragma config WDT=ON
#pragma config MCLRE=ON
#pragma config LPT1OSC=OFF
#pragma config PBADEN=OFF
#pragma config STVREN=OFF
#pragma config LVP=OFF
#pragma config XINST=OFF
#pragma config DEBUG=OFF
#pragma config CP0=OFF,CP1=OFF,CP2=OFF,CP3=OFF,CPB=OFF,CPD=OFF
#pragma config WRT0=OFF,WRT1=OFF,WRT2=OFF,WRT3=OFF,WRTB=OFF,WRTC=OFF,WRTD=OFF
#pragma config EBTR0=OFF,EBTR1=OFF,EBTR2=OFF,EBTR3=OFF,EBTRB=OFF

int main(void){
    OSCCON = 0b11111111;
    TRISA = 0;
    TRISB = 0;
    TRISC = 0;
        
    while(1){
        LATBbits.LATB5 = 0;
        Delay10KTCYx(32);
        LATBbits.LATB5 = 1;
        Delay10KTCYx(32);                  
    }
}