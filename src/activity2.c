#include<avr/io.h>
#include"activity2.h"

void ADC_Init()
{
    ADMUX=(1<<REFS0);   //AVcc = +5V = Vref
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

uint16_t ADC_Read(uint8_t ch)
{
    //Select ADC Channel ch  must be 0-7
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    //start single Conversion
    ADCSRA|=(1<<ADSC);

    //wait for conversion to complete
    while(!(ADCSRA & (1<<ADIF)));

    //Clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
