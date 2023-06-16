//program to print reverse table of 'n' number
#include<stdio.h>
int main(){
    int i=10,n;
    printf("Enter No.:");
    scanf("%d",&n);
    do{
        printf("%dx%d=%d\n",n,i,n*i);
        i--;
    }while(i>=1);
    return 0;
}