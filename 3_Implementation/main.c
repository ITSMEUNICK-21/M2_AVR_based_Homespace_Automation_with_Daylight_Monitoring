#include "all_functions.h"

int main(void)
{
    InitADC();
    peripheral_init();
    timerreg_init();

    sei();

    long int range = 0;
    uint16_t lux;	

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

