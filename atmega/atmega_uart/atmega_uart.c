
#define F_CPU 16000000UL 
#define BAUD 9600
#include <avr/io.h>
#include <stdint.h>

#define UBRR_VALUE F_CPU/16/BAUD-1

uint8_t uart_write_n(uint8_t *buffer, uint16_t count) {
    uint8_t i = 0;
    while (i < count && buffer[i] != '\n') {
        while (!(UCSR0A & (1 << UDRE0)));
        UDR0 = buffer[i];
        i++;
    }

    return i;
}

uint8_t uart_read_n(uint8_t *buffer, uint16_t count) {
    uint8_t i = 0;
    while (i < count && buffer[i] != '\n') {
        while (!(UCSR0A & (1 << RXC0)));
        buffer[i] = UDR0;
        i++;
    }
    return i;  // Add a semicolon here
}

void uart_init() {
    uint16_t ubrr = UBRR_VALUE;
    UBRR0H = (uint8_t)(ubrr >> 8);
    UBRR0L = (uint8_t)ubrr;
    UCSR0B = (1 << TXEN0) | (1 << RXEN0);
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

