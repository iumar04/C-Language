//program to print natural upto 20
#include<stdio.h>
int main(){
    int i=1,j=1,n;
    printf("Enter No.:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    do{
        printf("%d\n",j);
        j++;
    }while(j<=n);
    return 0;
}