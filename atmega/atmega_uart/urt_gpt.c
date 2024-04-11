#define F_CPU 16000000UL 
#define BAUD 9600
#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>

#define UBRR_VALUE F_CPU/16/BAUD-1

void uart_transmit(uint8_t data) {
    while (!(UCSR0A & (1 << UDRE0)));
    UDR0 = data;
}
uint8_t uart_write_n(uint8_t *buffer, uint16_t count) {
    uint8_t i = 0;
    while (i < count && buffer[i] != '\0') {
        while (!(UCSR0A & (1 << UDRE0)));
        UDR0 = buffer[i];
        i++;
    }

    return i;
}


uint8_t uart_read_n(uint8_t *buffer, uint16_t count) {
    uint8_t i = 0;
    while (i < count - 1) {  // Prevent buffer overflow by leaving space for '\0'
        while (!(UCSR0A & (1 << RXC0)));
        buffer[i] = UDR0;
        if (buffer[i] == '\n') {
            break;  // Stop reading if newline is received
        }
        i++;
    }
    buffer[i] = '\0';  // Null-terminate the string
    return i;
}

void uart_init() {
    uint16_t ubrr = UBRR_VALUE;
    UBRR0H = (uint8_t)(ubrr >> 8);
    UBRR0L = (uint8_t)ubrr;
    UCSR0B = (1 << TXEN0) | (1 << RXEN0);
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

int main(void) {
    uart_init();

    while (1) {
        uint8_t rx_buffer[20] = "hello";
        uint8_t rx_length = uart_read_n(rx_buffer, sizeof(rx_buffer) - 1); // Leave space for null terminator

        // Echo received data back
        uart_write_n(rx_buffer, rx_length);

        // Add a delay or other main code here as needed
    }
}

