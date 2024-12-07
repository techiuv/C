// This program demonstrates the use of arrays and basic string handling in C.

#include <stdio.h>
#include <string.h> // Required for string functions

int main() {
    // Arrays: Storing multiple values
    int arr[5] = {1, 2, 3, 4, 5}; // An array of size 5
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // Printing array elements
    }
    printf("\n");

    // Strings: A character array
    char name[20] = "C Programming"; // A string
    printf("String: %s\n", name);

    // String Handling
    char str1[20] = "Hello";
    char str2[20] = "World";
    strcat(str1, str2); // Concatenates str2 to str1
    printf("Concatenated String: %s\n", str1);

    return 0;
}
