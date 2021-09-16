/**
 * @file main.c
 * @author Tanuja Patgar (you@domain.com)
 * @brief  Heat control system main .c file
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<util/delay.h>
//#include "delay.h"
#include <avr/io.h>
#include"activity1.h"
#include"activity2.h"
#include"activity3.h"
#include"activity4.h"

int main(void)
{
    /**
     * @brief function to setup timer1 with channel A for pulse width modulation with wave generation mode of 10 bits fast PWM and prescaling of 64.
     * 
     */
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);  /*setting timer1 for PWM*/
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);     /*64 pre-scalar*/
    DDRB|=(1<<PB1);                             /*Setting PB1 as output pin*/
    buttonsLED_Init();
    ADC_Init();
    USART_Init(103);/*Initialize ports for USART*/
    uint16_t temp=0;/* temperature value*/
    while(1)
    {
    if(SENSORON)                   /* Button Sensor ON*/
    {
            if(HEATERON)           /* Heater ON*/
            {

                PORTB|=(1<<PB0);/* LED is ON*/
                _delay_ms(200);

                Timer_Wave_Gen_Mode();
                pwm_output();
                _delay_ms(200);
                temp=temperature_display();
            USART_Write(temp);/*send data to USART*/
            _delay_ms(20);

            }
             else
            {
                _delay_ms(200);
                OCR1A = 0; /*PWM wave 0 if swicthes off */
                PORTB&=~(1<<PB0);/* LED off*/

            }
        }
        else
        {
            PORTB&=~(1<<PB0); /* LED off*/
             OCR1A = 0; /*PWM wave 0 if switches off */
                _delay_ms(200);


        }
    }

    return 0;
}

