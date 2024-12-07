// This program demonstrates dynamic memory allocation in C.

#include <stdio.h>
#include <stdlib.h> // Required for malloc, calloc, realloc, free

int main() {
    int *arr;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocating memory using malloc
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the elements
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr);

    return 0;
}
