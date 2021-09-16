/**
 * @file activity3.c
 * @author Tanuja Patgar (you@domain.com)
 * @brief read conditions of temperature value and display it into oscilloscope
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include "activity3.h"
#include "activity2.h"

/**
 * @brief function to setup timer1 with channel A for pulse width modulation with wave generation mode of 10 bits fast PWM and prescaling of 64.
 * 
 */
void Timer_Wave_Gen_Mode(void)
{

    SET_TIMER1_FAST_PWM; /*setting timer1 for PWM*/
    PRESCALE_TIMER_64; /*64 pre-scalar*/
    SET_PWM_AS_OUTPUT; /*Setting PB1 as output pin*/

}

/**
 * @brief function which receives 10 bit of ADC input from temperature sensor and outputs as a fast PWM waveform.
 * 
 */
void pwm_output(void)
{

    if((ADC_Read(0)>=0) && (ADC_Read(0)<=209)){

        OCR1A = 205; /*20% duty cycle*/
        _delay_ms(20);
    }
    else if((ADC_Read(0)>=210) && (ADC_Read(0)<=509)){

        OCR1A = 410; /*40% duty cycle*/
        _delay_ms(20);
    }
    else if((ADC_Read(0)>=510) && (ADC_Read(0)<=709)){

        OCR1A = 717;/*70% duty cycle*/
        _delay_ms(20);
    }
    else if((ADC_Read(0)>=710) && (ADC_Read(0)<=1024)){

        OCR1A = 973; /*95% duty cycle*/
        _delay_ms(20);
    }
    else
    {
        OCR1A = 0; /*0% output*/
    }

}
