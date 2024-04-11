#include <stdio.h>
#include <stdbool.h>
bool swapped = false;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[]) {
    int i, j;
    int length = 7;
    for (i = 1; i < length; i++) {
    swapped = true;
        for (j = 0; j < length - 1-i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
		swapped = true;
            }
	    if(swapped == false)
	    {
	    	break;
	    }
        }
    }
}

void print_array(int arr[]) {
    int length = 7;
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[7] = {2, 3, 6, 4, 9, 3, 7};
    bubble_sort(arr);
    print_array(arr);

    return 0;
}

