#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>

#define RFCOMM_PORT "/dev/rfcomm0"  // Change this to your RFCOMM port

int main() {
    int fd;
    struct termios options;

    // Open the RFCOMM port
    fd = open(RFCOMM_PORT, O_RDWR | O_NOCTTY);
    if (fd == -1) {
        perror("Error opening port");
        return -1;
    }

    // Get the current port options
    tcgetattr(fd, &options);

    // Set the baud rate to 9600
    cfsetispeed(&options, B9600);
    cfsetospeed(&options, B9600);

    // Set other options - 8N1 (8 data bits, no parity, 1 stop bit)
    options.c_cflag &= ~PARENB;
    options.c_cflag &= ~CSTOPB;
    options.c_cflag &= ~CSIZE;
    options.c_cflag |= CS8;
    options.c_cflag |= CREAD;
    options.c_cflag |= CLOCAL;

    // Set input mode to non-canonical mode (raw mode)
    options.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);

    // Set the new options
    tcsetattr(fd, TCSANOW, &options);

    // Read data from the RFCOMM port
    char buffer[255];
    ssize_t bytesRead;

    while (1) {
        bytesRead = read(fd, buffer, sizeof(buffer) - 1);
        if (bytesRead > 0) {
            // Null-terminate the received data
            buffer[bytesRead] = '\0';

            // Print the received data as a string
            printf("Received data: %s\n", buffer);
        }
        usleep(100000); // Sleep for 100ms (adjust as needed)
    }

    // Close the RFCOMM port
    close(fd);

    return 0;
}

