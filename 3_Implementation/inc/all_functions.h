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

void InitADC(void);
void peripheral_init(void);
void timerreg_init(void);

uint16_t ReadADC(uint8_t ch);

unsigned int read_ultrasonic();

