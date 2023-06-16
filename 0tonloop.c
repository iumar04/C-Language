//program to print number 0 to n &n is given by user
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}