#include <stdio.h>


void 
insertion_sort(int* arr,int n)
{
	for (int i =0; i<n ; i++)
	{
		int temp = arr[i];

		int j =i-1;
		while(j >= 0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		
		
		}

		arr[j+1] = temp;
	
	
	
	}







}



int main()
{
	int arr [4] ={5,1,8,3} ;
	  insertion_sort(arr,4);

	for (int i=0 ;i< 4;i++)
	{
	
		printf("%d\n",arr[i]);
	}


}
