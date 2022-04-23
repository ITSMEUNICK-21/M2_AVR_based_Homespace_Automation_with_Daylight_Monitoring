# Description
* Homespace Automation with Daylight Monitoring is an energy-efficient system that automates the turning on or off lights in a home space by detecting the human presence and daylight monitoring is added as a responsible feature in the system. 

# Requirements
* Visual Studio Code, AVR compiler, SimulIDE, Make Installer, Doxygen, Linux OS, Windows OS
# Features
* It enables detection of person or group of people within the defined range of the home space area.
* The home space area under automation can be expanded with the increase in the number of sensors and required actuators.
* Daylight Monitoring plays a vital role in contributing towards making the system energy-efficient.
   
# Highlevel Requirements
|HLR_ID|Description|Status|
|:--:|:--:|:--:|
|HLR_1|This project ensures detection of person or group of people in pre-defined homespace area|Implemented|
|HLR_2|This project facilitates Daylight Monitoring|Implemented|
|HLR_3|This project ensures turning on the bulb if there isn't enough daylight and detection is ascertained|Implemented|
|HLR_4|This project aims to cover most of the home appliances|Future|

    
# Lowlevel Requirements
|HLR_ID|LLR_ID|Description|Status|
|:--:|:--:|:--:|:--:|
|HLR_1|LLR_01|The detection is performed using ULtrasonic sensor|Implemented|
|HLR_2|LLR_01|The Daylight Monitoring is facilitated by LDR sensor|Implemented|
|HLR_3|LLR_01|Control signal is given to relay which facilitates turning on/off the bulb|Implemented|


# SWOT Analysis
![](https://github.com/ITSMEUNICK-21/M2_AVR_based_Homespace_Automation_with_Daylight_Monitoring/blob/main/6_Output/Others/SWOT_Analysis_M2.jpg)

# 4W's & 1H
* **What**  : Home Space Automation with Daylight Monitoring using the microcontroller Atmega328p.
* **When**  : When there is a need to automate the mechanization processes in home environments.
* **Where** : It can be incorporated seamlessly in home and business spaces.
* **Why**   : To vouch towards energy conservation, automation of individual home space and thus improving the standard of living.
* **How**   : By developing an embedded system using LDR and Ultrasonic sensor with Atmega328p being the microcontroller.

# References

* https://www.electronicwings.com/avr-atmega/atmega1632-timer-input-capture-mode
* https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf
* https://components101.com/sites/default/files/component_datasheet/LDR%20Datasheet.pdf


