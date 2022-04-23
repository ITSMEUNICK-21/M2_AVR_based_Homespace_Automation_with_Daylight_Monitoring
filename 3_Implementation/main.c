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
    peripheral_init();                            /* Peripheral Initialization */
    InitADC();                                    /* ADC Initialization */
    timerreg_init();                              /* Timer register Initialization */

    sei();                                        /* Enable global interrupts */

    long int range = 0;
    uint16_t lux = 0;	

    while(1)
    {

        lux = ReadADC(0);
        _delay_ms(200);

        range = read_ultrasonic();                /* store distance value read from ultrasonic sensor */
        
        /* The range for this prototype example is set at 150 cm and 
        the minimum home daylight intensity is  set at 150 lux */
        if(range < 150 )                         
        {
            if(lux > 642)                           /* 642 is the decimal equivalent of 150 lux */
            {
                PORTD |= (1 << RELAY_PIN);          /* To turn on Bulb */
            }
            else
            { 
                PORTD &= ~(1 << RELAY_PIN);         /* To turn off Bulb */
            }
            
        }
        else
        {
            PORTD &= ~(1 << RELAY_PIN);             /* To turn off Bulb */
        }
    }

    return 0;
}

