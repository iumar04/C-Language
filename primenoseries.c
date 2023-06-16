//program to print prime number series
#include<stdio.h>
int main(){
    int i,n,j;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Prime numbers between 1 to %d are: \n",n);
    for(i=2;i<=n;i++){
        int flag = 0;
        for(j=2;j<i;j++){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}