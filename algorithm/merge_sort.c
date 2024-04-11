#include <stdio.h>
int
merge(int arr[],int lb,int mid,int ub)
{
	int i = lb;
	int j= mid+1;
	int k = lb;
	int a[7]={0};

	while(i <= mid && j <= ub)
	{
		if(arr[i] < arr[j])
		{
			a[k] = arr[i];
			i++;
		}
		else
		{
			a[k]=arr[j];
			j++;
		
		}

		k++;

	}

	while(j<=ub)
	{
		a[k] = arr[j];
		j++;
		k++;
	}
	while(i<= mid)
	{
		a[k] = arr[i];
		i++;
		k++;
	}	

for (k=lb;k <= ub;k++)
{
	arr[k]=a[k];

}
}


int
merge_sort(int arr[],int lb,int ub)
{
	if (lb < ub)
	{
		int mid = (ub+lb)/2;
		merge_sort(arr,lb,mid);
		merge_sort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);

	}

}

int 
main()
{

	int arr[] = {1,2,9,4,2,7,0};

	merge_sort(arr,0,6);
	
	
	
	for (int i=0;i< 7;i++)
	{
		printf("%d", arr[i]);
	
	}
	

}





