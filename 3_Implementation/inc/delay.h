/**
 * @file delay.h
 * @author Tanuja Patgar (you@domain.com)
 * @brief Delay function for LED ON and OFF
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef DELAY_H_INCLUDED
#define DELAY_H_INCLUDED

#include "activity1.h"
//#include <util/delay.h>
/**
 * @brief Function to find delay for LED on or off
 * 
 * @param delay_time value for delay 
 */
void delay_ms(uint32_t delay_time);

#endif // DELAY_H_INCLUDED
