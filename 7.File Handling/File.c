// This program demonstrates basic file handling in C.

#include <stdio.h>

int main() {
    // Writing to a file
    FILE *file = fopen("example.txt", "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Hello, File Handling in C!\n"); // Write to the file
    fclose(file); // Close the file

    // Reading from a file
    file = fopen("example.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char line[100];
    while (fgets(line, sizeof(line), file)) { // Read line by line
        printf("%s", line);
    }
    fclose(file);

    return 0;
}
