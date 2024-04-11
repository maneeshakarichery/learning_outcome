#include <stdio.h>
#include <stdbool.h>


int*
bubble_sort(int arr[],int n)
{
	bool swapped = false;
	int i=0;
	for (i;i< n-1;i++)
	{
		//int j = i;
		for (int j=0;j < n-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j]  = arr[j+1];
				arr[j+1] = temp;
				swapped = true;
			
			}

		 if (!swapped)
		 {break;}
		}
	
	
	}
return arr;
}

int
main()
{


int array[]= {2,1,4,3,9,6,0};
int *newarry = bubble_sort(array,7);
for (int i=0 ;i < 7 ;i++)
{
	printf("%d ",newarry[i]);

}



}
