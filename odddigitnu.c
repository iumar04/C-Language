#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        num /= 10;
    }

    printf("The sum of the odd digits is: %d\n", sum);
    return 0;
}
