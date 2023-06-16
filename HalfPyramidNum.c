//program to print half pyramid of number
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter No. of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}