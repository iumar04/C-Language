//program to find sum of first n number using recursion
#include <stdio.h>

int sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("The sum of the first %d numbers is: %d", n, sum(n));
    return 0;
}
