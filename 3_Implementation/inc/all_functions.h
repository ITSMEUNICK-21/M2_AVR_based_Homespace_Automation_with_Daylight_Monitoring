/**
 * @file all_functions.h
 * @author Hegde Nikhil Suresh
 * @brief Header Files for required configuration and for all defined functions
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "project_config.h"

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

/**
* @brief Performs initializations associated with ADC.
*/
void InitADC(void);

/**
* @brief Performs initializations associated with peripherals of Atmega328p microcontroller.
*/
void peripheral_init(void);

/**
* @brief Performs initializations associated with timer registers of Atmega328p microcontroller.
*/
void timerreg_init(void);

/**
* @brief Reads the analog signal from the selected channel and returns the digital equivalent value.
* @param[in] ch
* @return Digital equivalent of the analog signal.
*/
uint16_t ReadADC(uint8_t ch);

/**
* @brief Detects the presence of an object and calculates the distance.
* Formula : (For 16 MHz clock), Distance = ((count/233.25) 
* @return Distance value in centimeters(cm).
*/
unsigned int read_ultrasonic();

