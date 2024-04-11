#include <stdio.h>

int* 
insertion_sort(int arr[],int n)
{
	int i=1;
	for( i;i<n;i++)
	{
		int temp = arr[i];
		int j=i-1;
		  while(j>=0 && arr[j]> temp)
		  {
		  	arr[j+1] = arr[j];
			j--;
		  
		  }
		   arr[j+1]= temp;
	
	
	}
	return arr;


}


int 
main()
{	
	int arr[]={3,2,1,7,0};
	int *val = insertion_sort(arr,5);


	for (int i=0; i< 5 ;i++)
	{
		printf("%d ", arr[i]);
	}	

}

