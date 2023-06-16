//program to print table using function
#include <stdio.h>

void print_table(int num)
{
    int i;
    
    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
}

int main()
{
    int num;
    
    printf("Enter the number to print the table for: ");
    scanf("%d", &num);
    
    printf("Table of %d:\n", num);
    
    print_table(num);
    
    return 0;
}
