#include <stdio.h>
 int n=1;


void even() ;
void odd();
void
odd()
{
	if (n <= 10)
	{
	 	printf("%d " ,n+1);
		n++;
		even();
		return;	
	
	}

}


void
even()
{
	if (n<=10)
	{
		printf("%d " , n-1);
		n++;
		odd();
		return;

	
	
	}


}


int
main()
{
	odd();

}
