
#include<util/delay.h>
#include "delay.h"
#include <avr/io.h>
#include"activity1.h"
#include"activity2.h"
#include"activity3.h"
#include"activity4.h"




int main(void)
{
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);  //setting timer1 for PWM
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);     //8 prescalar
    DDRB|=(1<<PB1);                             //Setting PB1 as output pin
    buttonsLED_Init();
    ADC_Init();
    USART_Init(103);//Initialize ports for USART
     uint16_t temp=0;// temperature value
    while(1)
    {
    if(SENSORON)                   // Button Sensor ON
    {
            if(HEATERON)           // Heater ON
            {

                PORTB|=(1<<PB0);// LED is ON
                delay_ms(LED_ON_TIME);

                Timer_Wave_Gen_Mode();
                pwm_output();
                _delay_ms(200);
                temp=temperature_display();
            USART_Write(temp);//send data to USART
            _delay_ms(20);

            }
             else
            {
                delay_ms(LED_OFF_TIME);
                OCR1A = 0; //PWM wave 0
                PORTB&=~(1<<PB0);

            }
        }
        else
        {
            PORTB&=~(1<<PB0);
             OCR1A = 0; //PWM wave 0
                delay_ms(LED_OFF_TIME);


        }
    }

    return 0;
}

