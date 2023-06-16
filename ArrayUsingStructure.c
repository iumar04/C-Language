//program to create an array of structure
#include <stdio.h>

// define a structure
struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    int n = 3;

    // declare an array of structures
    struct student s[n];

    // initialize structure members
    for (int i = 0; i < n; i++) {
        s[i].roll = i + 1;
        sprintf(s[i].name, "Student %d", i + 1);
        s[i].marks = 70.0 + i * 5.0;
    }

    // print structure members
    for (int i = 0; i < n; i++) {
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }

    return 0;
}
