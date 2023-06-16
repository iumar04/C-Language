//program to perform all airthmatic operation in c
#include<stdio.h>

int main()
{
    int num1,num2;   
    int sum,sub,mul,div;
    float mod;

    printf ("Enter Numbers:");
    scanf ("%d%d",&num1,&num2);

    sum=num1+num2;
    printf ("Sum of the numbers:%d",sum);

    sub=num1-num2;
    printf ("\nSub of the numbers:%d",sub);

    mul=num1*num2;
    printf ("\nMul of the numbers:%d",mul);

    div=num1/num2;
    printf ("\nDiv of the numbers:%d",div);

    mod=num1%num2;
    printf ("\nMod of the numbers:%.2f",mod);  

    return 0;
}
