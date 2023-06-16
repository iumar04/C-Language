//program to print ASCII Value of letters and numbers
#include<stdio.h>
int main(){
    printf("ASCII value of small letters\n");
    for(int i=97;i<=122;i++){
        printf("%c\t%d\n",i,i);
    }
    printf("ASCII value of capital letters\n");
    for(int i=65;i<=90;i++){
        printf("%c\t%d\n",i,i);
    }
    printf("ASCII value of 1 to 150\n");
    for(int i=1;i<=150;i++){
        printf("%c\t%d\n",i,i);
    }
    return 0;
}