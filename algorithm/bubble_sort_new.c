#include <stdio.h>

void
bubble_sort(int* arr ,int n)		
{
	int i =0;

	for (i ;i< n-1;i++) 
	{
		int swapped = 0;
	        int j = i;
		for (j ; j < n-1-i ;j++)
		{
			
			if( arr[j] > arr[j+1])
			{
				int temp =  arr[j+1];
				arr[j+1] =  arr[j];
				arr[j] = temp;
				swapped = 1;
			}

		
		}		
			


	if (swapped==0)
	{
		break;
	
	
	}



			
	}
	;

}


int main()
{
	int arr [4] ={5,1,8,3} ;
	  bubble_sort(arr,4);

	for (int i=0 ;i< 4;i++)
	{
	
		printf("%d\n",arr[i]);
	}


}
