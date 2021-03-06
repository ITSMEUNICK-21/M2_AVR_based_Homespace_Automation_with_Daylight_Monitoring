
/**
 * @file project_config.h
 * @author Hegde Nikhil Suresh
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Macro Definitions
 */


#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define TRIG_PIN  PD0       /* Trigger pin of Ultrasonic Sensor connected to PORTD0 */
#define RELAY_PIN PD4       /* Control signal is sent to realy module through PORTD4 */

