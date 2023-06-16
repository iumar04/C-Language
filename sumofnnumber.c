//program to input n different number and find their sum
#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter the value: ");
    scanf("%d", &n);
    printf("Enter %d numbers :", n);
    for(i=1; i<n; ++i)
    {
        int num;
        scanf("%d\n", &num);
        sum = sum + num;
    }
    printf("Sum of %d numbers = %d", n, sum);
    return 0;
}