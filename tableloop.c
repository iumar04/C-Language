//program to print table of n (n is given by user)
#include<stdio.h>
int main(){
    int i=1,n,mul;
    printf("Enter No.:");
    scanf("%d",&n);
    do{
        mul=n*i;
        printf("%dx%d=%d\n",n,i,mul);
        i++;
    }while(i<=10);
    return 0;
}