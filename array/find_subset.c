#include <stdio.h>
#include <stdbool.h>


bool
is_sub_set(int arr1[],int lenght1,int arr2[],int lenght2)
{
	int freq[20] ={0};


	for (int i =0 ; i< lenght1 ; i++)
	{
		freq[arr1[i]]++;
	
	
	}

	for (int i= 0 ;i<lenght2 ; i++ )
	{
		freq[arr2[i]]--;
	
	}

	for (int i=0 ; i < 20; i++)
	{
		if(freq[i] != 0)
			return false; 

	}
return true; // Add this line to return true for subsets

	




}

int main()
{
    // Example usage:
    int arr1[] = {1, 2, 3, 4, 5};
    int length1 = 5;

    int arr2[] = {2, 3};
    int length2 = 2;

    if (is_sub_set(arr1, length1, arr2, length2))
    {
        printf("arr2 is a subset of arr1\n");
    }
    else
    {
        printf("arr2 is not a subset of arr1\n");
    }

    return 0;
}
