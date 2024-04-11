#include <stdio.h>

// Function with a static variable
void exampleFunction() {
    // Static variable retains its value between function calls
    static int staticVar = 0;

    // Increment the static variable
    staticVar++;

    // Print the value of the static variable
    printf("Static variable value: %d\n", staticVar);
}

int main() {
    // Call the function multiple times
    exampleFunction();
    exampleFunction();
    exampleFunction();

    return 0;
}

