//keep taking number as input from user until user enter a number which is multiple of 9 & 3
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    while(1){
        scanf("%d\n",&n);
        if(n%3==0&&n%9==0){
            break;
        }
    }
    printf("You enterd a number which is multiple of 9 & 3");
    return 0;
}