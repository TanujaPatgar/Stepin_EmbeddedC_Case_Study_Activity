/**
 * @file activity2.h
 * @author Tanuja Patgar (you@domain.com)
 * @brief  Read sensor analog values and convert it into digital values using ADC
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
/**
 * @brief initialize the ADC (Analog to Digital Converter)
 * 
 */
void ADC_Init();
/**
 * @brief to read the ADC values
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ADC_Read(uint8_t ch);

#endif // ACTIVITY2_H_INCLUDED
