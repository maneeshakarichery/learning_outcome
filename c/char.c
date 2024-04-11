#include <stdio.h>

int main() {
    int num = 42;
    long num1 = 45;
    short num2 = 67;
    double pi = 3.14159;

    printf("Size of num: %zu bytes\n", sizeof(num));
    printf("Size of pi: %zu bytes\n", sizeof(pi));
    printf("Size of num: %zu bytes\n", sizeof(num1));
    printf("Size of num: %zu bytes\n", sizeof(num)); 
    printf("Size of num: %zu bytes\n", sizeof(num));    

    return 0;
}

