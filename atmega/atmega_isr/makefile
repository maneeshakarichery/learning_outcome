MCU = atmega328p  # Change this according to your AVR model
F_CPU = 16000000UL  # Change this according to your AVR clock frequency

CC = avr-gcc
OBJCOPY = avr-objcopy
CFLAGS = -Wall -g -Os -mmcu=$(MCU) -DF_CPU=$(F_CPU)

my_program.hex: isr.c intr.h
	$(CC) $(CFLAGS) $< -o my_program.elf
	$(OBJCOPY) -O ihex my_program.elf my_program.hex

flash: my_program.hex
	avrdude -p $(MCU) -c YOUR_PROGRAMMER -P YOUR_PORT -U flash:w:my_program.hex

clean:
	rm -f my_program.elf my_program.hex

