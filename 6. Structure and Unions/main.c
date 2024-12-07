// This program demonstrates structures and unions in C.

#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int id;
    char name[50];
    float marks;
};

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Using a structure
    struct Student student1;
    student1.id = 101;
    strcpy(student1.name, "Alice");
    student1.marks = 95.5;

    printf("Student Details:\n");
    printf("ID: %d, Name: %s, Marks: %.2f\n", student1.id, student1.name, student1.marks);

    // Using a union
    union Data data;
    data.i = 10;
    printf("Union int: %d\n", data.i);
    data.f = 3.14;
    printf("Union float: %.2f\n", data.f);
    strcpy(data.str, "C Programming");
    printf("Union string: %s\n", data.str);

    return 0;
}
