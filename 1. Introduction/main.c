// This program demonstrates the basics of C programming, including printing output, 
// using variables, constants, and taking user input.

#include <stdio.h> // Includes the standard input/output library

int main() {
    // **1. Hello, World!**
    // The `printf` function is used to display output on the screen.
    printf("Hello, World!\n");
    printf("Welcome to C Programming!\n\n"); // Printing a welcome message

    // **2. Variables and Constants**
    // A variable is used to store data, which can change during program execution.
    // Syntax: data_type variable_name = value;

    int age = 25;            // An integer variable to store age
    float height = 5.9;      // A float variable to store height
    const double PI = 3.14159; // A constant to store the value of PI (unchangeable)

    // Printing the values of the variables
    printf("Age: %d\n", age);          // %d is the format specifier for integers
    printf("Height: %.1f\n", height); // %.1f limits the decimal to 1 place
    printf("Value of PI: %.5lf\n\n", PI); // %.5lf prints 5 decimal places for a double

    // **3. Taking Input from the User**
    // The `scanf` function is used to read input from the user.
    int number;          // A variable to store an integer input
    float price;         // A variable to store a floating-point input

    // Prompting the user for an integer input
    printf("Enter an integer: ");
    scanf("%d", &number); // %d is used for integers, &number stores the value in 'number'

    // Prompting the user for a floating-point input
    printf("Enter a floating-point number: ");
    scanf("%f", &price); // %f is used for floats, &price stores the value in 'price'

    // Displaying the user inputs
    printf("You entered the integer: %d\n", number);
    printf("You entered the floating-point number: %.2f\n", price);

    // The program ends successfully
    return 0;
}

