//keep taking number as input from user until user enter a number which is multiple of 3 or 7
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    while(1){
        scanf("%d",&n);
        if(n%3==0||n%7==0){
            break;
        }
    }
    printf("You enterd a number which is multiple of 3 or 7");
    return 0;
}