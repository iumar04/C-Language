//program to check if enter two side is square or not
#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter side:");
    scanf("%d%d",&a,&b);

    if(a==b){
        printf("Square");
    }
    else{
        printf("Rectangle");
    }
    return 0;
}
