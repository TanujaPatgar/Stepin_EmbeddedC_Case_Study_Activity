#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#define AVR_ATmega328
#include <avr/io.h>

#define SENSORON !(PIND&(1<<PD2))
#define HEATERON !(PIND&(1<<PD3))
#define do {SET_LED PORTD|=(1<<PB0)}while(0)
#define CLEAR_LED do {PORTD&=~(1<<PB0)} while(0)


#define LED_ON_TIME     (1000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (500)   /**< LED OFF time in milli seconds */

void buttonsLED_Init();

#endif // ACTIVITY1_H_INCLUDED
