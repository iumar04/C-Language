//program to compare two no. using pointer
#include <stdio.h>

void compare(int *a, int *b) {
    if (*a == *b) {
        printf("%d and %d are equal\n", *a, *b);
    } else if (*a > *b) {
        printf("%d is greater than %d\n", *a, *b);
    } else {
        printf("%d is less than %d\n", *a, *b);
    }
}

int main() {
    int num1 = 10, num2 = 20;

    // compare two numbers using pointers
    compare(&num1, &num2);

    return 0;
}
