# Case Study Activity

## Heat Control System
 The heat control system is used to control the temperature of a vehicle seat. When passengers or driver of the car gets seated on a car, the button sensor gets activate after that heater enabled. The temperarure sensor keeps monitoring the temperature and sends analog value of temperature to the microcontroller. The microcontroller converts analog to digital values using ADC and display the digital value of temperature.

 ## Simulation

 The functionality of the heat control system is coded in Embedded C programming and executed in CodeBlocks and Visual Studio Code and working is demonstrated using simulated circuit using SimulIDE software.

## Functions

*  When the two switches (button sensor and heater enable) are openedor any one of the switch is opened, the LED is OFF indicating heater is not enable.
*  If both swiches are closed analog input from the temperature sensor is received and converts analog to digital value.
*  The digital value of temperature is visualized using Pulse Width Modulation(PWM).
*  The corresponding temperature values displayed.

## CI and Code Quality

| Build | Cppcheck | Codacy |
| ----- | -------- | ------ 

## In Action

| ON | OFF |
| -- | --- 
