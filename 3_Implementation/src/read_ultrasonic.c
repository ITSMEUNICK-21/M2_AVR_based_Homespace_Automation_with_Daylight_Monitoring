#include "all_functions.h"


volatile int TimerOverflow = 0;

unsigned int read_ultrasonic()
{
    double distance = 0;
    long count = 0;
    PORTD |= (1 << TRIG_PIN);
    _delay_us(10);
    PORTD &= (~(1 << TRIG_PIN));

    TCNT1 = 0;
    TCCR1B = 0x41;
    TIFR1 = (1 << ICF1);
    TIFR1 = (1 << TOV1);

    while((TIFR1 & (1 << ICF1)) == 0);

    TCNT1 = 0;
    TCCR1B = 0x01;
    TIFR1 = (1 << ICF1);
    TIFR1 = (1 << TOV1);
    
    while((TIFR1 & (1 << ICF1)) == 0);

    count = ICR1;
    distance = ((double)count/233.25);
    
    TimerOverflow = 0;

    return distance;
}


ISR(TIMER1_OVF_vect)
{
    TimerOverflow++;
}