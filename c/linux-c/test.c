#include <stdio.h>


void str_change(char *str);
void val_change(long val);

int
main(void)
{	
	char name[20];
	int  a = 10;

	printf("Enter name: ");
	scanf("%s", name);
	printf("Name: %s\n", name);
	printf("val: %d\n", a);

	str_change(name);
	val_change((long)&a);

	printf("Name: %s\n", name);
	printf("val: %d\n", a);

}


void
str_change(char *str)
{
	str[0] = 'm';
}

void
val_change(long val)
{
	*((int *)val) = 20;
}
