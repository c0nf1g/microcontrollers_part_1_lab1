/*
 * main.c
 *
 * Created: 2/15/2020 6:34:52 PM
 *  Author: MyPC
 */ 

#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{	
	DDRC = 0xFF;
	DDRK &= ~(1 << 3);
	PORTK |= (1 << 3);
	
	/* Replace with your application code */
	while (1)
	{
		if (PINK == (0 << 3)) {
			for (int i = 7; i >= 0; i--) {
				if ((i % 2) != 0) {
					PORTC |= (1 << i);
					_delay_ms(600);
					PORTC &= ~(1 << i);
				}
			}
			for (int i = 7; i >= 0; i--) {
				if ((i % 2) == 0) {
					PORTC |= (1 << i);
					_delay_ms(600);
					PORTC &= ~(1 << i);
				}
			}	
		} else {
			PORTC |= 0x0;
		} 		
	}
}