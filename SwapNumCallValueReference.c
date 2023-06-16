//program to swap two no. by call by value and reference
#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (by value): a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping (by reference): a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // swap by value
    swapByValue(a, b);

    // swap by reference
    swapByReference(&a, &b);

    printf("After swapping (in main): a = %d, b = %d\n", a, b);

    return 0;
}
