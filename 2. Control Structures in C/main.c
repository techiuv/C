// This program demonstrates the use of control structures in C: 
// decision-making (if-else, switch), loops (for, while, do-while), and jump statements (break, continue).

#include <stdio.h> // Includes the standard input/output library

int main() {
    // **1. Decision-Making: if-else**
    int number;

    printf("Enter a number: ");
    scanf("%d", &number); // Taking an integer input from the user

    // Checking if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // **2. Decision-Making: switch**
    printf("\nEnter a day number (1-7): ");
    int day;
    scanf("%d", &day);

    // Using switch-case to print the day of the week
    switch (day) {
        case 1:
            printf("It's Monday.\n");
            break;
        case 2:
            printf("It's Tuesday.\n");
            break;
        case 3:
            printf("It's Wednesday.\n");
            break;
        case 4:
            printf("It's Thursday.\n");
            break;
        case 5:
            printf("It's Friday.\n");
            break;
        case 6:
            printf("It's Saturday.\n");
            break;
        case 7:
            printf("It's Sunday.\n");
            break;
        default:
            printf("Invalid day number! Please enter a number between 1 and 7.\n");
    }

    // **3. Loops**
    printf("\nPrinting numbers from 1 to 5 using loops:\n");

    // (a) For loop
    printf("Using for loop: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // (b) While loop
    printf("Using while loop: ");
    int i = 1; // Initialize the counter
    while (i <= 5) {
        printf("%d ", i);
        i++; // Increment the counter
    }
    printf("\n");

    // (c) Do-While loop
    printf("Using do-while loop: ");
    i = 1; // Reset the counter
    do {
        printf("%d ", i);
        i++; // Increment the counter
    } while (i <= 5);
    printf("\n");

    // **4. Jump Statements**
    printf("\nDemonstrating break and continue:\n");

    // Break example: Exit loop when `i` is 3
    printf("Using break: ");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            break; // Exits the loop when i equals 3
        }
        printf("%d ", i);
    }
    printf("\n");

    // Continue example: Skip printing `i` when it's 3
    printf("Using continue: ");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skips the current iteration when i equals 3
        }
        printf("%d ", i);
    }
    printf("\n");

    // The program ends successfully
    return 0;
}
