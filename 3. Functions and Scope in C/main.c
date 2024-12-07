// This program demonstrates functions, parameter passing, return values, and variable scope in C.

#include <stdio.h> // Includes standard I/O library

// Function declaration: Adds two integers and returns the result
int add(int a, int b) {
    return a + b; // Returns the sum of a and b
}

// Function to demonstrate recursion: Calculates factorial of a number
int factorial(int n) {
    if (n == 0) // Base case: Factorial of 0 is 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    // Demonstrating function call
    int x = 10, y = 20;
    int sum = add(x, y); // Calling the add function
    printf("The sum of %d and %d is: %d\n", x, y, sum);

    // Demonstrating recursion
    int num = 5;
    printf("The factorial of %d is: %d\n", num, factorial(num));

    // Variable Scope
    int globalVar = 100; // This variable is accessible throughout main()

    {
        // Block scope
        int localVar = 200; // This variable is only accessible in this block
        printf("Inside block: globalVar = %d, localVar = %d\n", globalVar, localVar);
    }
    // printf("Outside block: localVar = %d\n", localVar); // Uncommenting this will cause an error!

    return 0;
}
