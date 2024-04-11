#include <stdio.h>



int*
reverse(int arr[],int n)
{
	for (int i=0; i< n/2; i++)
	{
		
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
		
		

	}



}

int
main()
{
	int arr[7] = {2,5,3,6,8,9,8};
	reverse(arr,7);
	for (int i=0;i< 7 ;i++)
	{
		printf("%d",arr[i]);
	}


}
