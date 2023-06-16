//program to find sum of digit of a given number
#include<stdio.h>
int main(){
    int num, rem, sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits of a given number=%d", sum);
    return 0;
}