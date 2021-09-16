/**
 * @file activity3.h
 * @author Tanuja Patgar 
 * @brief  read conditions of temperature value and display it into oscilloscope
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED
/**
 * @brief macro to set PB1 bit as a fast PWM output port with timer1, A channel
 * 
 */
#define SET_TIMER1_FAST_PWM TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10)
/**
 * @brief macro to pre-scale timer1 for 64 and wave generation mode for 10 bit digital input
 * 
 */

#define PRESCALE_TIMER_64 TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10)

/**
 * @brief set PB1 as PWM output
 * 
 */
#define SET_PWM_AS_OUTPUT DDRB|=(1<<PB1)

/**
 * @brief function to setup timer1 with channel A for pulse width modulation with wave generation mode of 10 bits fast PWM and prescaling of 64.
 * 
 */
void TimerWaveGenMode(void);
/**
 * @brief function which receives 10 bit of ADC input from temperature sensor and outputs as a fast PWM waveform.
 * 
 */
void pwm_output(void);

#endif // ACTIVITY3_H_INCLUDED
