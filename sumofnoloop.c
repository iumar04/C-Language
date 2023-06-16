//program to print sum of n natural numbers
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter NO.:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum is:%d",sum);
    return 0;
}