//program to create structure
#include <stdio.h>
#include <string.h>

// define a structure
struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    // declare a structure variable
    struct student s1;

    // initialize structure members
    s1.roll = 1;
    strcpy(s1.name, "John");
    s1.marks = 90.5;

    // print structure members
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
