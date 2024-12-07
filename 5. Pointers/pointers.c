// This program demonstrates the use of pointers in C.

#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a; // Pointer stores the address of variable a

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value at address stored in ptr: %d\n", *ptr);

    // Pointer Arithmetic
    int arr[3] = {1, 2, 3};
    int *arrPtr = arr; // Points to the first element of the array
    for (int i = 0; i < 3; i++) {
        printf("Value at arr[%d]: %d\n", i, *(arrPtr + i));
    }

    return 0;
}
