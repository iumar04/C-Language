#include<stdio.h>
int main(){
    int n,m,i=1,sum=0;
    printf("Enter Student Number:");   //how many student are there
    scanf("%d",&n);
    while(i<=n){
        printf("Enter Amount:");  //enter student amount given by student
        scanf("%d",&m);
        i++;
        sum=sum+m;
    }
    printf("Total Amount:%d",sum);
    return 0;
}