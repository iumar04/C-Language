//program to print reverse of a number of any digit entered by user
#include<stdio.h>
int main()
{
    int n,remainder,reverse=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    printf("Reverse of the number is: %d", reverse);
    return 0;
}