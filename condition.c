#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age>=18)
        printf ("Eligible for voting");
    else
        printf("Not for voting");
    return 0;
    }