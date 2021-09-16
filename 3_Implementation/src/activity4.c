#include <avr/io.h>
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

void USART_Init(uint16_t ubrrvalue)
{
    UBRR0L = ubrrvalue;
    UBRR0H = (ubrrvalue>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}
void USART_Write(char tempvalue)
{
  while(!(UCSR0A & (1<<UDRE0)))
  { }
UDR0 = tempvalue;
}

char temperature_display()
{
    char temperature;

     if((ADC_Read(0)>=0) && (ADC_Read(0)<=209)){

       temperature= 20;
    }
    else if((ADC_Read(0)>=210) && (ADC_Read(0)<=509)){

        temperature= 25;
    }
    else if((ADC_Read(0)>=510) && (ADC_Read(0)<=709)){

        temperature= 29;
    }
    else if((ADC_Read(0)) && (ADC_Read(0)<=1024)){

        temperature= 33;
    }
    else
    {
        temperature= 0;
    }
    return temperature;
}
