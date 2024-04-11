#include <stdio.h>




partition(int arr[],int lb,int ub)
{
	int pivot  = arr[lb];
        int start = lb;
	int end = ub;

	while(start < end)
	{
		while(a[start] < pivot)
		{
			start++;
		
		}
		while(a[end]> pivot)
		{
			end--;
		
		}
		if(start <end)
		{
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}

	
	
	}


}
