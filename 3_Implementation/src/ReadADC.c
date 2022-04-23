#include "all_functions.h"

/* Function to read analog value in defined channel and to convert it into digital equivalent */
uint16_t ReadADC(uint8_t ch)
{

    ADMUX&=0xf8;                    /* To use only 8 channels for conversion */
    ch=ch&0b00000111;        
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);              /* To start conversion */

    while(!(ADCSRA & (1<<ADIF)));   /* To wait till end of conversion */

    ADCSRA|=(1<<ADIF);              

    return(ADC);
}