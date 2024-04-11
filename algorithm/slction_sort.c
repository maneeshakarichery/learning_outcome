#include <stdio.h>

int *
selection_sort(int arr[], int n)
{
    int i, j, min_ind;
    i = 0;

    for (i; i < n ; i++)
    {
        min_ind = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {

               min_ind = j;
            }
              

            
            
        }
        
        if (min_ind != i)
        {
        	int temp = arr[min_ind];
        	arr[min_ind] = arr[i];
        	arr[i] = temp;
        }
        
    }

    return arr;
}

int
main()
{
    int arr[] = {1, 3, 9, 0, 5};
    int *new_arr = selection_sort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

