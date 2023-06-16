//program to make a simple calculator using switch statement
#include<stdio.h>
int main(){
    char ch;
    int n1,n2;
    int res;
    printf ("Enter Operator (+,-,*,/):");
    scanf ("%c",&ch);
    printf ("Enter Numbers:");
    scanf ("%d%d",&n1,&n2);
    switch (ch){
        case '+':
        printf ("Addition of Numbers:%d",res=n1+n2);
        break;
        case '-':
        printf ("Substraction of Numbers:%d",res=n1-n2);
        break;
        case '*':
        printf ("Multiplication of Numbers:%d",res=n1*n2);
        break;
        case '/':
        printf ("Division of Numbers:%d",res=n1/n2);
        break;
        default:
        printf ("Enter a valid Operator");
    }
    return 0;
}