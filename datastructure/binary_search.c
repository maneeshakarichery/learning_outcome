#include <stdio.h>

int 
binary_search(int arr[],int n,int data)

{
	int l,r,mid;
	 l = 0;
	 r = n-1;
while(l<=r)
{	


	
	 mid  = (l+r)/2;
	if (arr[mid] == data)

	{
		return mid;
	}
	else if(arr[mid]> data)
	{
		r = mid-1;	
	}
	else
		l = mid+1;
}
printf("element s not present");
}



int
main()
{
	int arry[10] = {1,2,3,4,5,6,7,8,9,10};
	int pos = binary_search(arry,10,7);
	printf("elemtent present at %d",pos);
}
