#include <stdio.h>


int 
missed_element(int arr[],int n)

{
	int sum =(n+1)*(n+2)/2;
	int s= 0;

	for (int i =0; i< n ;i++)
	{
		sum = sum- arr[i];

	
	}	

	return (sum);



}



void
main()
{
	int arr[5] = {1,2,3,5,6};
	int val = missed_element(arr,5);
	printf("missed element is %d",val);

}
