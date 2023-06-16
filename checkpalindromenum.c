//program to check given number palindrome or not
#include <stdio.h>
int main()
{
    int num, original_num, reversed_num = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    // Reverse the number
    while (num > 0)
    {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }
    // Check if the original number is equal to the reversed number
    if (original_num == reversed_num)
    {
        printf("%d is a palindrome number.\n", original_num);
    }
    else
    {
        printf("%d is not a palindrome number.\n", original_num);
    }

    return 0;
}
