
#include <stdio.h>	
void
num_to_acsi(n)
{

       uint8_t	max_size = sizeof(n)*8;
	for (int i=0 ,i< max_size ,i+4)
	{
		digit[i/4] =( n << i ) >>  (max_size-4)
	
	}


	    printf("ASCII representation: %s\n", digit);


	
}

int main() {
    int number = 12345; // Replace with your desired number
    num_to_ascii(number);

    return 0;
}



