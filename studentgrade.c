#include<stdio.h>
int main(){
    int mark;
    printf("Enter your marks:");
    scanf("%d",&mark);
    if(mark>=90&&mark<=100){
        printf("Your grade is A+");
    }
    else if(mark>=80&&mark<=90){
        printf("Your grade is A");
    }
    else if(mark>=70&&mark<=80){
        printf("Your grade is B");
    }
    else if(mark>=33&&mark<=70){
        printf("Your grade is C");
    }
    else if(mark>=00&&mark<=33){
        printf("You are fail");
    }
    else{
        printf("Invalid Marks");
    }
    return 0;
}