#include "all_functions.h"

/* Function to initialize ADC */
void InitADC(void)
{
    ADMUX = (1<<REFS0);               /* to select the reference voltage */
    ADCSRA = (1<<ADEN)|(7<<ADPS0);    /* to enable ADC,  ADC Prescalar is set at 128 */
}

/* Function to initialize the peripherals */
void peripheral_init(void)
{
	DDRD |= (1 << DDD4);              /* To make D4 pin as output */
    DDRD |= (1 << DDD0);              /* To make D0 pin as output */

    PORTB = 0xFF;	                  /* internal pullup */
}

/* Function to initialize timer register */
void timerreg_init(void)
{
    TIMSK1 |= (1 << TOIE1);           /* To enable Overflow Interrupt */
    TCCR1A = 0;		
}