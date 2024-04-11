#include <stdio.h>


int str_len(char *str);
void str_swap(char *c1, char *c2);
void str_reverse(char *str);

int
main()
{
	char name[20];
	int  a;
	int len;

		
	printf("Enter the name: ");
	scanf("%s", name);
	printf("My name is: %s\n", name);

	len = str_len(name);

	printf("Enter the val: ");
	scanf("%d", &a);
	printf("val is: %c\n", a);
	printf("length of the given %s\n is %d\n", name , len);
//	str_swap(&name[1], &name[3]);
	str_reverse(name);
	printf("manesh\n");
	printf("length of the given %s\n is %d\n", name , len);


}

int
str_len(char *str)
{
	int i = 0;

	for(; str[i] != '\0'; i++);

	return(i);
}


void
str_swap(char *c1, char *c2)
{
	char temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

void
str_reverse(char *str)
{
	int len;
	int swap_len;
	int i;
	
	len = str_len(str);
	swap_len = (int)len/2;

	for(i = 0; i < swap_len; i++)
	{
		str_swap(&str[i], &str[len-i-1]);
	}

}
