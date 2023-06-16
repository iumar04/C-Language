//program to print square of no. by call by value and reference
#include <stdio.h>

void squareByValue(int n) {
    printf("Square of %d is: %d\n", n, n*n);
}

void squareByReference(int *n) {
    *n = (*n) * (*n);
    printf("Square of number stored at %p is: %d\n", n, *n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // square by value
    squareByValue(num);

    // square by reference
    squareByReference(&num);

    printf("Original number: %d\n", num);

    return 0;
}
