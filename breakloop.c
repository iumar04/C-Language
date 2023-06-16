//program to print user's input number until user entered a odd number
#include<stdio.h>
int main(){
    int n;
    do{
    printf("Enter Number:");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n%2!=0){
        break; //Exit the loop
    }
    }while(1);
    printf("Odd Number");
    return 0;
}