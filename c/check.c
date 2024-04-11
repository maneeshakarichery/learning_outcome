#include <stdio.h>
#include <string.h>
#include <ctype.h>
int 
main()
{
	printf("enter a string\n");
	char  string[100];
	scanf("%s",string);
	printf("entered string is :%s\n",string);
	int length = strlen(string);
	printf("lenght of string is : %d",length);
	int vovel = 0;



	for (int i=0 ; string[i]!='\0';i++)
	{
	//	int vovel = 0;
		switch (toupper(string[i]))
		{
			case'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vovel++;
				//printf("no of vowels:%d",vovel);
				break;
		}
	}

printf("no of vowels:%d",vovel);
                              
	return 0;




}
