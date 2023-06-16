//program to input 4 digit number and find sum of first and last digit
#include<stdio.h>
int main()
{
	int num,ldigit,fdigit,sum;
	printf("Enter a 4 digit number: ");
	scanf("%d",&num);
	ldigit=num%10;		//getting last digit
	fdigit=num/1000;	//getting first digit
	sum=fdigit+ldigit;
	printf("Sum of first and last digit is: %d",sum);
	return 0;
}