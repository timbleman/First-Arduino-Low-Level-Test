#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main (void) {

   DDRB  |= (1 << PB0);
   DDRB  &= ~(1 << PB3);
   PORTB |= (1 << PB2);
   int ledStatus = 0;

   while(1) {
	/*if(!(PINB & (1 << PB2))) {
		//PORTB |= (1 << PB0);
		//_delay_ms(500);
		if (ledStatus == 1 ){
			ledStatus = 0;
			PORTB &= ~(1 << PB0);
		} else {
			ledStatus = 1;
			PORTB |= (1 << PB0);
		}
		_delay_ms(300);
	}*/
	PORTB &= ~(1 << PB0);
	_delay_ms(300);
	PORTB |= (1 << PB0);
	_delay_ms(300);
   }

   return 0;
}
