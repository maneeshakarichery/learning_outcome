#include <stdio.h>

int strlen1(char *str);

int 
main(void) 
{

    char name[25];
	int i;
	int size;

    printf("Enter Name: ");
    scanf("%s", name);

	size = strlen1(name);

	printf("Addr of name is %p\n", name);
	printf("The name[%d] is %s\n", size, name);
		  
    printf("The name is: ");
	
	for(i=0; name[i+1] != '\0'; i++)
	{
		printf("%c-", name[i]);
	}		
	printf("%c", name[i]);
	printf("\n");
	
    return 0;
}


int 
strlen1(char *str)
{
	int i;

	for(i = 0; str[i] != '\0'; i++);
	return i;
}
