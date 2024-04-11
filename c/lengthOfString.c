# include <stdio.h>
int str_lgt(char str[]);


int
main()
{
        char name[18];
	printf("input a string:\n");
	scanf("%s" , name);
	printf("the entered name is:\n %s ", name);
	int size= str_lgt(name);
	printf("lenght of strng is \n:%d",size);




}

 int str_lgt(char str[])
{

	int i =0;
	while(str[i]!='\0')
		i++;
		return i;

}
