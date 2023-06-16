//program to find square and their sum of even no.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=1; i <= n; ++i){
        if(i%2==0){
            sum += i*i;
        }
    }
    printf("Sum = %d",sum);
    return 0;
}