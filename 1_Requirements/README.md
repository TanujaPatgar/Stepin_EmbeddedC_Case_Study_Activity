# Case Study Activity

## Introduction

The heat control system is used to control the temperature of a vehicle seat. When passengers or driver of the car gets seated on a car, the button sensor gets activate after that heater enabled. The temperarure sensor keeps monitoring the temperature and sends analog value of temperature to the microcontroller. The microcontroller converts analog to digital values using ADC and display the digital value of temperature.

## Features and Functionality

### Features
*   Button Sensor will check the passenger is seated or not.
*   Temperature sensor works as shown in belo table.
*   Display CDD-CRO will give the temperature value by showing PWM.
*   Heater will check the heater button is ON.
*   Display temperature value using USART communication protocol.

#### Temperature Sensor Table

| ADC Value (Temperature Sensor) | Output PWM |
| ------------------------------ | ---------- 
| 0-200                          | 20% - 20'C |
| 210-500                        | 40% - 25'C |
| 510-700                        | 70% - 29'C |
| 710-1024                       | 95% - 33'C |
### Functions

*   When the two switches (button sensor and heater enable) are openedor any one of the switch is opened, the LED is OFF indicating heater is not enable.
*   If both swiches are closed analog input from the temperature sensor is received and converts analog to digital value.
*   The digital value of temperature is visualized using Pulse Width Modulation(PWM).
*   The corresponding temperature values displayed.

## Benefits

*   Maintaining optimal temperature in the vehicle compartment over time.
*   Control temperature of car.
*   Cost effective.
*   Promotes less suffocation and nauseous. 
*   Provides flexibility, user friendly and better performance.

## Defining our system

*   If passengers seated button sensor will activate and we need to enable heater sensor for temperature readings.
*   The temperature sensor analog outputs will converts to digital using ADC (Analog to Digital Converter).
*   The digital outputs of ADC display in CDD-CRO will give the temperature value by showing PWM.
*   Display digitalized output in serial monitor using USART.

## SWOT Analysis

![image](https://user-images.githubusercontent.com/89603034/133576751-7d7b55b9-acd0-4cc9-a03e-c2bdbad0caf0.png)

## 4W's and 1H

### Who

Vehicle(Car)
### What

A contol the seat temperature mannually becomes tedious.
### When

When user wants to check temperature also contol temperature quickly and the reduces the lots of mannual works.
### Where

This issue can be seen in all types of vehicle especially car where the controlling the car seats of temperature actions happens.
### How

The mannually control temperature will be take more times and complex to understand tempearture values.
## Detail Requirements

| ID | Description | Category | Status |
| -- | ----------- | -------- | ------
| R01 | If passengers seated on the car button sensor will be activated | Technical | Implemented |
| R02 | After passenger and driver seated, the user needs to enable the heater sensor | Technical | Implemented |
| R03 | Enabling both button and heater sensor, LED will be ON (binary output) | Technical | Implemented |
| R04 | Reads temperature information from temperature sensor and convert analong inputs to digital using ADC | Technical | Implemented |
| R05 | Display CDD-CRO will give the temperature value by showing PWM | Technical | Implemented |
| R06 | Display digital temperature values in serial monitor using USART communication protocol | Technical | Implemented |

## Components used for Simulation

| SL. No. | Components | Specifications | No. of components used |
| ------- | ---------- | -------------- | -----------------------
| 01 | ATmega328 | AVR Microcontroller | 01 |
| 02 | Switch button | Max 50mA, 24V DC | 02 |
| 03 | LED | Yellow light | 02 |
| 04 | Resistor | 100 ohm | 02 |
| 05 | Ground | 0V | 01 |
| 06 | potentiometer | 1K ohm | 01 |
| 07 | Fixed voltage | 5V | 01 |
| 08 | Oscilloscope | --- | 01 |
| 09 | wires |  | 15 |
