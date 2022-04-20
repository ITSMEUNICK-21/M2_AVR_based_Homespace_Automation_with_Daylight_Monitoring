
#include "all_functions.h"


void InitADC(void)
{
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN)|(7<<ADPS0);
}

void peripheral_init(void)
{
	DDRD |= (1 << DDD4);
    DDRD |= (1 << DDD0);

    PORTB = 0xFF;	
}

void timerreg_init(void)
{
    TIMSK1 |= (1 << TOIE1);
    TCCR1A = 0;		
}