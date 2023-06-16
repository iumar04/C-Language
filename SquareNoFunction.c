//program to print square of a no. using pow() function
#include <stdio.h>
#include <math.h>

int main()
{
    double num, square;
    
    printf("Enter a number to find its square: ");
    scanf("%lf", &num);
    
    square = pow(num, 2);
    
    printf("The square of %lf is %lf\n", num, square);
    
    return 0;
}
