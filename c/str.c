#include <stdio.h>
#include <stdint.h>

// Define a regular packet structure
typedef struct {
    uint8_t header;   // Header byte
    uint16_t length;   // Length of the data
    uint8_t data[256]; // Data payload (adjust size as needed)
    uint16_t checksum; // Checksum for data integrity
} Packet;

// Function to process a packet
void processPacket(Packet *packet) {
    // Access and modify the packet fields as needed
    packet->length = 20;

    // Do something with the packet...
}

int main() {
    // Create an instance of the Packet structure
    Packet myPacket;

    // Initialize the packet fields (modify as per your requirements)
    myPacket.header = 0xAA;
    myPacket.length = 10;

    // Fill data payload
    for (int i = 0; i < myPacket.length; i++) {
        myPacket.data[i] = i + 1;
    }

    // Calculate checksum (this is a simple example, adjust based on your needs)
    myPacket.checksum = myPacket.header + myPacket.length;
    for (int i = 0; i < myPacket.length; i++) {
        myPacket.checksum += myPacket.data[i];
    }

    // Pass the packet to a function for processing
    processPacket(&myPacket);

    // Print memory addresses and content of the packet
    printf("Memory Address of myPacket: %p\n", (void*)&myPacket);
    printf("Address of header: %p\n", (void*)&myPacket.header);
    printf("Address of length: %p\n", (void*)&myPacket.length);
    printf("Address of data: %p\n", (void*)&myPacket.data);
    printf("Address of checksum: %p\n", (void*)&myPacket.checksum);

    printf("Header: 0x%X\n", myPacket.header);
    printf("Length: %u\n", myPacket.length);
    printf("Data: ");
    for (int i = 0; i < myPacket.length; i++) {
        printf("%u ", myPacket.data[i]);
    }
    printf("\nChecksum: %u\n", myPacket.checksum);

    return 0;
}

