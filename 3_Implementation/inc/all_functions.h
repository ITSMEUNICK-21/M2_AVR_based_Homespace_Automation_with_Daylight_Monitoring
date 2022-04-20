#include "project_config.h"

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

void InitADC(void);
void peripheral_init(void);
void timerreg_init(void);

uint16_t ReadADC(uint8_t ch);

unsigned int read_ultrasonic();

