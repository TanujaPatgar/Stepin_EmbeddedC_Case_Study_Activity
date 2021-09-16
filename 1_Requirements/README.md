# Case Study Activity

## Introduction

The heat control system is used to control the temperature of a vehicle seat. When passengers or driver of the car gets seated on a car, the button sensor gets activate after that heater enabled. The temperarure sensor keeps monitoring the temperature and sends analog value of temperature to the microcontroller. The microcontroller converts analog to digital values using ADC and display the digital value of temperature.

## Features and Functionality

### Features
*  Button Sensor will check the passenger is seated or not.
*  Temperature sensor works as shown in belo table.
*  Display CDD-CRO will give the temperature value by showing PWM.
*  Heater will check the heater button is ON.
*  Display temperature value using USART communication protocol.

#### Temperature Sensor Table

| ADC Value (Temperature Sensor) | Output PWM |
| ------------------------------ | ---------- 
| 0-200                          | 20% - 20'C |
| 210-500                        | 40% - 25'C |
| 510-700                        | 70% - 29'C |
| 710-1024                       | 95% - 33'C |
### Functions

*  When the two switches (button sensor and heater enable) are openedor any one of the switch is opened, the LED is OFF indicating heater is not enable.
*  If both swiches are closed analog input from the temperature sensor is received and converts analog to digital value.
*  The digital value of temperature is visualized using Pulse Width Modulation(PWM).
*  The corresponding temperature values displayed.

## Benefits

*  Maintaining optimal temperature in the vehicle compartment over time.
*  Control temperature of car.
*  Cost effective.
*  Promotes less suffocation and nauseous. 
*  Provides flexibility, user friendly and better performance.

## Defining our system

*  If passengers seated button sensor will activate and we need to enable heater sensor for temperature readings.
*  The temperature sensor analog outputs will converts to digital using ADC (Analog to Digital Converter).
*  The digital outputs of ADC display in CDD-CRO will give the temperature value by showing PWM.
*  Display digitalized output in serial monitor using USART.

## SWOT Analysis

https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/blob/main/1_Requirements/swot_analysis.png?raw=true

## 4W's and 1H

### Who

### What

### When

### Where

### How

## Detail Requirements

## Components used for simulation


