//program to create a structure using function
#include <stdio.h>

// define a structure
struct student {
    int roll;
    char name[20];
    float marks;
};

// function to initialize structure members
void initialize(struct student *s, int roll, char *name, float marks) {
    s->roll = roll;
    strcpy(s->name, name);
    s->marks = marks;
}

int main() {
    // declare a structure variable
    struct student s1;

    // initialize structure members using function
    initialize(&s1, 1, "John", 90.5);

    // print structure members
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}

