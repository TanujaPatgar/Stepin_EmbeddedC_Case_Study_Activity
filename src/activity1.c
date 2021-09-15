
#include "delay.h"
#include <avr/io.h>
#include"activity1.h"


void buttonsLED_Init()
{
    DDRB|=(1<<PB0);//B0 AS AN OUTPUT PIN
    DDRD&=~(1<<PD2);//making it 0
    PORTD|=(1<<PD2);//setting bit
    DDRD&=~(1<<PD3);//making 0
    PORTD|=(1<<PD3);//setting bit
}


