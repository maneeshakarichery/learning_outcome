#include<stdio.h>

int str_len(char *str);
void str_rev_print(char *str);

int
main()
{
	char name[25];
	int len;

	printf("Please enter the name : ");
	scanf("%s", name);
	printf("My name is %s\n", name);	
	len = str_len(name);
	printf("The name lenght is %d\n", len);	

	str_rev_print(name);	

}

int 
str_len(char *str)
{
	int i = 0;

	while (str[i++] != '\0');

	return(i);
}


void
str_rev_print(char *str)
{
	int len;
	int i;
	
	len = str_len(str);
	printf("len = %d\n", len);
	
	i = len - 1;

	while (i != 0 )
	{
		printf("%c", str[i]);
		i--;
	}
	printf("%c\n", str[i]);
	
}
