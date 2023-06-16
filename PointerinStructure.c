//program of pointer in structure
#include <stdio.h>

// define a structure
struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    // declare a structure variable
    struct student s1 = {1, "John", 90.5};

    // declare a pointer to structure
    struct student *ptr;

    // initialize pointer to structure
    ptr = &s1;

    // print structure members using pointer
    printf("Roll: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
