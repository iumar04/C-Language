//program to create a structure within structure
#include <stdio.h>
#include <string.h>

// define a structure
struct date {
    int day;
    int month;
    int year;
};

// define another structure with a structure member
struct student {
    int roll;
    char name[20];
    float marks;
    struct date dob;
};

int main() {
    // declare a structure variable
    struct student s1;

    // initialize structure members
    s1.roll = 1;
    strcpy(s1.name, "John");
    s1.marks = 90.5;
    s1.dob.day = 10;
    s1.dob.month = 3;
    s1.dob.year = 2000;

    // print structure members
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    printf("DOB: %d-%d-%d\n", s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}
