#include "all_functions.h"


volatile int TimerOverflow = 0;      

/* Function to read the distance from Ultrasonic Sensor */
unsigned int read_ultrasonic()
{
    double distance = 0;
    long count = 0;

    /* Sending a trigger input pulse of 10us to sensor module */

    PORTD |= (1 << TRIG_PIN);                 
    _delay_us(10);
    PORTD &= (~(1 << TRIG_PIN));
    

    TCNT1 = 0;             /* Clear Timer Counter */                       
    TCCR1B = 0x41;         /* Capture on rising edge, no prescalar */
    TIFR1 = (1 << ICF1);   /* Clear Input Capture Flag (ICP Flag) */              
    TIFR1 = (1 << TOV1);   /* Clear Timer Overflow Flag */
    
    /* Calculate pulse width of Echo by Input Capture method */

    while((TIFR1 & (1 << ICF1)) == 0);   /* Wait for rising edge */

    TCNT1 = 0;             /* Clear Timer Counter */
    TCCR1B = 0x01;         /* Capture on falling edge, no prescalar */
    TIFR1 = (1 << ICF1);   /* Clear Input Capture Flag (ICP Flag) */              
    TIFR1 = (1 << TOV1);   /* Clear Timer Overflow Flag */
    
    
    while((TIFR1 & (1 << ICF1)) == 0);   /* Wait for falling edge */

    count = ICR1;                      /* Count is extracted from Input Capture Register (ICR1) register */

    /* Formula :
       For 16 Mhz freq;

       Distance of object (in cms) 
       = (SoundVelocity * Timer)/2
       
       = (Timer Value)/233.25)
    */

    distance = ((double)count/233.25);   
    
    TimerOverflow = 0;

    return distance;
}


/* Interrupt Service Routine for Timer1 Overflow */
ISR(TIMER1_OVF_vect)
{
    TimerOverflow++;   /* Increment Timer Overflow Count */
}