#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>


#define BAUD 9600
#define UBRR_VALUE F_CPU/16/BAUD-1

void uart_transmit(uint8_t data) {
    // Wait for empty transmit buffer
    while (!(UCSR0A & (1 << UDRE0)));
    
    // Put the data into the buffer, sends the data
    UDR0 = data;
}

void uart_send_string(const char* str) {
    // Loop through each character in the string
    while (*str != '\0') {
        // Transmit the current character
        uart_transmit(*str);
        
        // Move to the next character in the string
        str++;
    }
}

void uart_init() {
    // Set baud rate
    uint16_t ubrr = UBRR_VALUE;
    UBRR0H = (uint8_t)(ubrr >> 8);
    UBRR0L = (uint8_t)ubrr;

    // Enable transmitter
    UCSR0B = (1 << TXEN0);

    // Set frame format: 8 data bits, 1 stop bit, no parity
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

int main(void) {
    uart_init();

    while (1) {
        // Send the string "hii"
        uart_send_string("hii");

        // Add a delay or other main code here as needed
        _delay_ms(1000);  // Example delay, adjust as necessary
    }
}

