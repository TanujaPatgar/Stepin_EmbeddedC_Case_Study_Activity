/**
 * @file activity4.h
 * @author Tanuja Patgar (you@domain.com)
 * @brief Display temperature sensor values
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
/**
 * @brief Function to initialize the USART communication
 * 
 * @param ubrrvalue unsigned integer to set the baud rate to 9600
 */
void USART_Init(uint16_t ubrrvalue);
/**
 * @brief Function to write the character to the USART buffer
 * 
 * @param tempvalue type integer is temperature value which is passed as input value
 */
void USART_Write(char tempvalue);
/**
 * @brief Function for different ADC value temperature range
 * 
 * @return char return temperature value
 */
char temperature_display();

#endif // ACTIVITY4_H_INCLUDED
