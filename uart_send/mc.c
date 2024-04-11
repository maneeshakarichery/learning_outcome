#define F_CPU 16000000UL
#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>
#include "mc.h"

#define INT_TYPE    0x00
#define FLOAT_TYPE  0x01
#define STRING_TYPE 0x10
#define HEX_TYPE    0x11

void
initializeDataPacket(struct header_packet_t  *packet, char type, uint16_t size, const void *data) {
    packet->magic_number = 888888888;
    packet->type_bits = type;
    packet->endianness_bit = 1; 
    packet->size = size;
    packet->data = data;
}

void
uart_init() {
    
    UBRR0H = (uint8_t)(103 >> 8);
    UBRR0L = (uint8_t)(103);
    UCSR0B = (1 << TXEN0) | (1 << RXEN0);
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

uint8_t
uart_write_n(uint8_t *buffer, uint16_t count) {
    uint8_t i = 0;
    while (i < count) {
        while (!(UCSR0A & (1 << UDRE0)));
        UDR0 = buffer[i];
        i++;
    }
    return i;
}

int
main()
{
    uart_init();
    header_packet_t myPacket;
    int a = 42;
    initializeDataPacket(&myPacket, INT_TYPE, sizeof(int), &a);

    while (1)
    {
   
        uart_write_n((uint8_t *)&myPacket, sizeof(myPacket));
        _delay_ms(100);
     }

    return 0;
}

