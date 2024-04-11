
#define F_CPU 16000000UL  // Set the CPU clock frequency to 16MHz

#include <avr/io.h>
#include <util/delay.h>



int main(void) {
    // Set PB5 as an output
    DDRB |= (1 << PB5);

    while (1) {
        // Toggle PB5 (LED) on and off with a delay
        PORTB ^= (1 << PB5);
        _delay_ms(500);
    }

    return 0;
}

