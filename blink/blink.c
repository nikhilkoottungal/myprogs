/*
 * blink2.c
 *
 * Created: 21-02-2020 12.28.22 PM
 * Author : ThisPc
 */ 




kohjfasfksajfkasfasfn



#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "blinky.h"

int main(void)
{
	
	DDRD=0xff;
	
    /* Replace with your application code */
    while (1) 
    {
blink1();
		
    }
}

