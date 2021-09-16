/**
 * @file activity1.h
 * @author Tanuja Patgar 
 * @brief Check button and heater sensor enabled or not
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#define AVR_ATmega328
//#include <avr/io.h>

/**
 * @brief a macro to check if the button is pressed or not.
 * 
 */
#define SENSORON !(PIND&(1<<PD2))
/**
 * @brief a macro to check if the heater is on or not.
 * 
 */
#define HEATERON !(PIND&(1<<PD3))
/**
 * @brief a macro to turn on LED
 * 
 */
#define do {SET_LED PORTD|=(1<<PB0)}while(0)
/**
 * @brief a macro to turn off LED
 * 
 */
#define CLEAR_LED do {PORTD&=~(1<<PB0)} while(0)

/**
 * @brief a macro to define LED on time delay
 * 
 */
#define LED_ON_TIME     (1000)  /** LED ON time in milli seconds  */
/**
 * @brief a macro to define LED off time delay
 * 
 */
#define LED_OFF_TIME    (500)   /** LED OFF time in milli seconds */

void buttonsLED_Init();

#endif // ACTIVITY1_H_INCLUDED
