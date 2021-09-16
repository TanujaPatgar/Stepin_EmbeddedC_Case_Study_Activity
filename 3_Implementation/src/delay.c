/**
 * @file delay.c
 * @author Tanuja Patgar (you@domain.com)
 * @brief  For LED on and off delay function
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "delay.h"
/**
 * @brief function to find LED on and off time dealy
 * 
 * @param delay_time in milliseconds
 */
void delay_ms(uint8_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}
