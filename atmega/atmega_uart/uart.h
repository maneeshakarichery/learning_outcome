#ifndef UART_H
#define UART_H

#include <stdint.h>

// Function declarations
uint8_t uart_write_n(uint8_t *buffer, uint16_t count);
uint8_t uart_read_n(uint8_t *buffer, uint16_t count);
void uart_init();

#endif  // UART_H

