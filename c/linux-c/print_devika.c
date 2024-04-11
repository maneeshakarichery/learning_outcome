#include<stdio.h>


int test=100;


int
main()
{
	int male = 3;
	int i = 5;
	int j = 2;
	int a;

	male++;
	++male;
	a = male;
	a = male++;
	a = ++male;
	a = male--;
	a = --male;
	a = j * male;	
	a *= j;
	a += male;
	j = (i > 10)? 3 : 5;

	{
		int k;

		k = 10;
		
		for(i=0,j=10; i < j; i++);	
		{

		 j--;	
		}

	}


	if (male == 1)
	{
		int k;
		printf("Name: %s\n", "Manesh");
	}
	else if (male == 2)
	{
		printf("Name: %s\n", "devika");
	}
	else
	{
		printf("Name: %s\n", "alien");
	}

	
	for(i = 0; i < 10; i++)
	{
		printf("Name : Unnimanga-%d\n", i);
	}	

	for(; i < 20; i++)
	{
		printf("Name : devika-%d\n", i);
	}

	i = 0;

	while(i < 10)
	{
		printf("Name: manesh-%d\n", i);
		i++;

		if(i == 5) continue;


		printf("manesh\n");
	}

	do
	{
		printf("Name: saraswathi-%d\n", i);
		i--;
	}while (i != 0);
	
	i = 10;	

	switch (i)
	{
		case 1: printf("val-1\n"); break;
		case 2: printf("val-2\n"); break;
		case 3: printf("val-3\n"); break;
		default : printf("val-n\n"); break;
	}


	printf("j: %d\n", j);		
}


	
