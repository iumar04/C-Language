//program of union data type
#include <stdio.h>

// define a union
union number {
    int i;
    float f;
    char c;
};

int main() {
    // declare a union variable
    union number n;

    // initialize union members
    n.i = 10;
    printf("Value of integer member: %d\n", n.i);

    n.f = 3.14;
    printf("Value of float member: %.2f\n", n.f);

    n.c = 'A';
    printf("Value of character member: %c\n", n.c);

    // print size of union
    printf("Size of union: %lu\n", sizeof(union number));

    return 0;
}
