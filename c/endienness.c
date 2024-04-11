#include <stdio.h>
#include <stdint.h>

int 
main()
{
	uint32_t a =0x01020304;
	uint8_t *ptr =(uint8_t*) &a;

	printf("address of each byte %x" ,*ptr-3);

	for (int i = 0; i < sizeof(a); i++) 
	{
		printf("the value at adress %p is %x\n", (void *)(ptr+i),ptr[i]);
	}

	return 0;

}
