//program to swap two number without third variable
#include<stdio.h>
int main(){
    int a,b;
    printf("a is:");
    scanf("%d",&a);
    printf("b is:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
    return 0;
}