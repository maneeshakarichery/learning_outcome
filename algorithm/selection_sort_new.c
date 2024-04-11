#include <stdio.h>


void
selection_sort(int* arr,int n)
{
 int min_index =0 ,i =0;

 for ( i ;i< n;i++)
 {
 	int j = i+1;
	min_index = i;
        for ( j;j< n;j++)
	{
		if(arr[j] < arr[min_index])
		{
		
			min_index = j;
		
		
		}


		
	
	
	}
 
 if (min_index != i)
		{
		  int temp = arr[i];
		  arr[i] = arr[min_index];
		  arr[min_index] = temp;
		
		}

 }


}

int main()
{
	int arr [4] ={5,1,8,3} ;
	  selection_sort(arr,4);

	for (int i=0 ;i< 4;i++)
	{
	
		printf("%d\n",arr[i]);
	}


}
