/**
 * @file main.c
 * @author Hegde Nikhil Suresh
 * @brief Project Title : AVR based Homspace Automation with Daylight Monitoring
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "all_functions.h"

int main(void)
{
    peripheral_init();
    InitADC();
    timerreg_init();

    sei();

    long int range = 0;
    uint16_t lux = 0;	

    while(1)
    {

        lux = ReadADC(0);
        _delay_ms(200);

        range = read_ultrasonic();

        if(range < 150 )
        {
            if(lux > 642)
            {
                PORTD |= (1 << RELAY_PIN);
            }
            else
            {
                PORTD &= ~(1 << RELAY_PIN);
            }
            
        }
        else
        {
            PORTD &= ~(1 << RELAY_PIN);
        }
    }

    return 0;
}

