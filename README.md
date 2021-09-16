# Case Study Activity

## Heat Control System
 The heat control system is used to control the temperature of a vehicle seat. When passengers or driver of the car gets seated on a car, the button sensor gets activate after that heater enabled. The temperarure sensor keeps monitoring the temperature and sends analog value of temperature to the microcontroller. The microcontroller converts analog to digital values using ADC and display the digital value of temperature.

 ## Simulation

 The functionality of the heat control system is coded in Embedded C programming and executed in CodeBlocks and Visual Studio Code and working is demonstrated using simulated circuit using SimulIDE software.

## Functions

*   When the two switches (button sensor and heater enable) are openedor any one of the switch is opened, the LED is OFF indicating heater is not enable.
*   If both swiches are closed analog input from the temperature sensor is received and converts analog to digital value.
*   The digital value of temperature is visualized using Pulse Width Modulation(PWM).
*   The corresponding temperature values displayed.

## CI and Code Quality

| Build | Cppcheck | Codacy | Main | C/C++ | GIT Inspector | Code Inspector |
| ----- | -------- | ------ | ---- | ----- | ------------- | --------------
| [![Compile-Linux](https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/actions/workflows/Compile.yml/badge.svg)](https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/actions/workflows/Compile.yml) | [![Cppcheck](https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/actions/workflows/CodeQuality.yml) | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/f5b02f230e7144eab366a7b671319d0d)](https://www.codacy.com/gh/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity&amp;utm_campaign=Badge_Grade) | [![CI](https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/actions/workflows/main.yml/badge.svg)](https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/actions/workflows/main.yml) | [![C/C++ CI](https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/actions/workflows/c-cpp.yml) | [![Contribution Check - Git Inspector](https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/TanujaPatgar/Stepin_EmbeddedC_Case_Study_Activity/actions/workflows/gitinspector.yml) | ![CodeQuality_Grade](https://www.code-inspector.com/project/28848/status/svg) |

## In Action

| ON | OFF |
| -- | --- 
| ![image](https://user-images.githubusercontent.com/89603034/133597339-bcb81a49-c65b-4130-82f1-6c3f0a92bbcb.png) | ![image](https://user-images.githubusercontent.com/89603034/133597590-bf67ebf4-65f2-4cb5-80da-38fa0c1987ef.png) |

## Folder Structure 
| Folder | Description |
| ------ | ----------- |
| 1_Requirements | Documents detailing requirements and research |
| 2_Architecture | Documents specifying design details |
| 3_Implementation | All code and documentation |
| 4_TestPlan | Documents with test plans and procedures |
| 5_Simulation | Documents with simulation file and outputs |
| 6_ImagesandVideos | Documents with output images |