//program to print prime no between a range using function
#include <stdio.h>

int is_prime(int num)
{
    int i;
    
    if (num < 2)
    {
        return 0;
    }
    
    for(i=2; i<num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int start, end, i;
    
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    
    printf("Prime numbers between %d and %d are: ", start, end);
    
    for(i=start; i<=end; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}
