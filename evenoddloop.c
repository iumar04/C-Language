//program to print even and odd number upto 50
#include<stdio.h>
int main(){
    int i=0;
    printf("Even no\n");
    while(i<=50){
        printf("%d\n",i);
        i+=2;
    }
    printf("Odd no\n");
    for(int i=1;i<=50;i+=2){
        printf("%d\n",i);
    }
    return 0;
}