#include <stdio.h>

int main() {
    // Declare an integer variable
    int num = 42;

    // Declare a pointer and assign the address of the variable
    int *ptr = &num;

    // Print the value and address using the pointer
    printf("Value of num: %d\n", *ptr);
    printf("Address of num: %p\n", (void*)ptr);  // %p is used to print the address

    return 0;
}

