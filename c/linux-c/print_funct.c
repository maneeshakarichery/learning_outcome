#include <stdio.h>
#include <unistd.h>

#define SLEEP_VAL 5

void
print_funct(void)
{
	while (1)
	{
		printf ("Hello\n");
		sleep(SLEEP_VAL);
	}
}
