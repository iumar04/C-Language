//program to find square series and their sum
#include<stdio.h>
int main(){
    int n;
    float sum=0;
    printf("Enter No.");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+(i*i);
    }
    printf("Sum of the square series is %.2f",sum);
    return 0;
}