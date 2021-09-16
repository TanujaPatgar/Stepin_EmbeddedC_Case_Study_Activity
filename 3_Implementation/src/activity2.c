/**
 * @file activity2.c
 * @author Tanuja Patgar (you@domain.com)
 * @brief Read sensor analog values and convert it into digital values using ADC
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include"activity2.h"
/**
 * @brief function to initialise the analog to digital converter (ADC)
 * 
 */
void ADC_Init()
{
    ADMUX=(1<<REFS0);   /*AVcc = +5V = Vref*/
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
/**
 * @brief funciton to receive temperature sensor inputs from analog pin and output it to a register ADC which has two 8 bit registers ADCL and ADCH.
 * 
 * @param ch channel
 * @return uint16_t ADC value
 */
uint16_t ADC_Read(uint8_t ch)
{
    /*Select ADC Channel ch  must be 0-7*/
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    /*start single Conversion*/
    ADCSRA|=(1<<ADSC);

    /*wait for conversion to complete*/
    while(!(ADCSRA & (1<<ADIF)));

    /*Clear ADIF by writing one to it*/
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
