# Project Report
               The project title is 'AVR based Homespace Automation with Daylight Monitoring'. 
               The objective of this project is to develop an energy-efficient system that automates the turning on or off lights
               in a home space by detecting the human presence and daylight monitoring is added as a responsible feature in the 
               system. The detection of the human presence is performed with the help of an Ultrasonic sensor and daylight monitoring
               is done using a LDR sensor and the microcontroller being used is Atmega328p.
               
## Features of the project
               This project's key features are :
               * It enables detection of person or group of people within the defined range of the home space area.
               * The home space area under automation can be expanded with the increase in the number of sensors and required actuators.
               * Daylight Monitoring plays a vital role in contributing towards making the system energy-efficient.
               
## Identifying the Requirements
      Technologies and Tools Used:
      
               * Development Tool: Github Website.
               * IDE Used : Virtual Studio Code.
               * Web browser: Mozilla Firefox.
               * Languages Used: C Language, Makefile.
               * Compiler : AVR Compiler.
               * Simulation Tool Used : SimulIDE.
               * Documentation Tool : Doxygen
               * Operating System : Linux OS, Windows OS.
               
 ## Highlevel Requirements
|HLR_ID|Description|Status|
|:--:|:--:|:--:|
|HLR_1|This project ensures detection of person or group of people in pre-defined homespace area|Implemented|
|HLR_2|This project facilitates Daylight Monitoring|Implemented|
|HLR_3|This project ensures turning on the bulb if there isn't enough daylight and detection is ascertained|Implemented|
|HLR_4|This project aims to cover most of the home appliances|Future|

    
## Lowlevel Requirements
|HLR_ID|LLR_ID|Description|Status|
|:--:|:--:|:--:|:--:|
|HLR_1|LLR_01|The detection is performed using ULtrasonic sensor|Implemented|
|HLR_2|LLR_01|The Daylight Monitoring is facilitated by LDR sensor|Implemented|
|HLR_3|LLR_01|Control signal is given to relay which facilitates turning on/off the bulb|Implemented|

# Architecture

* Block Diagram

![Block Diagram](https://github.com/ITSMEUNICK-21/M2_AVR_based_Homespace_Automation_with_Daylight_Monitoring/blob/main/2_Design/Block_Diagram_M2.drawio.png)

* Flowchart

![Flowchart](https://github.com/ITSMEUNICK-21/M2_AVR_based_Homespace_Automation_with_Daylight_Monitoring/blob/main/2_Design/Flowchart_M2.drawio.png)

* Schematic Diagram

![Schematic Diagram](https://github.com/ITSMEUNICK-21/M2_AVR_based_Homespace_Automation_with_Daylight_Monitoring/blob/main/2_Design/Schematic_M2.drawio.png)

# Test Cases:

## Overall Working System

|Test_ID|Description|Exp O/P|Actual O/P|Type of Test|
|:--:|:--:|:--:|:--:|:--:|
|TST_1|Object within 150 cm range and the daylight intensity is less than 150 lux|Bulb is ON|Bulb is ON|Requirements based|
|TST_2|Object within 150 cm range and the daylight intensity is more than 150 lux|Bulb is OFF|Bulb is OFF|Requirements based|
|TST_3|Object more than 150 cm range and the daylight intensity is less than 150 lux|Bulb is OFF|Bulb is OFF|Requirements based|
|TST_4|Object more than 150 cm range and the daylight intensity is more than 150 lux|Bulb is OFF|Bulb is OFF|Requirements based|

## LDR Sensor Unit Testing

|Test_ID|Description|Exp O/P|Actual O/P|Type of Test|
|:--:|:--:|:--:|:--:|:--:|
|TST_1|Minimum measurement of daylight intensity possible|0 lux |0 lux|Boundary based|
|TST_2|Maximum measurement of daylight intensity possible|>= 10000 lux|999 lux|Boundary based|
|TST_3|Measures required daylight intensity|150 lux|150 lux|Requirements based|

## Ultrasonic Sensor Unit Testing 

|Test_ID|Description|Exp O/P|Actual O/P|Type of Test|
|:--:|:--:|:--:|:--:|:--:|
|TST_1|Minimum measurement of distance possible|1 cm |4 cm|Boundary based|
|TST_2|Maximum measurement of daylight intensity possible|400 cm|275 cm|Boundary based|
|TST_3|Measures required distance|150 cm|150 cm|Requirements based|

## SWOT Analysis
![](https://github.com/ITSMEUNICK-21/M2_AVR_based_Homespace_Automation_with_Daylight_Monitoring/blob/main/6_Output/Others/SWOT_Analysis_M2.jpg)

## Implementation
    Instructions to RUN program :
    
        1. Clone my repository into your system.
        2. You should go to 3_Implementation/ folder.
        3. Run "make all" command in your terminal for execution of program.
        
## Author

- [@ITSMEUNICK-21](https://www.github.com/ITSMEUNICK-21)
