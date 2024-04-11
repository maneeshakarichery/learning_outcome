#ifndef __UART_H__
#define __UART_H__

#pragma pack(1)
typedef struct header_packet_tag {
    uint16_t magic_number;	
    char type_bits;
    char endianness_bit;
    uint16_t size;
      
}header_packet_t;
#pragma pack()

#endif // __UART_H__
