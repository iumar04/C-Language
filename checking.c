#include<stdio.h>
int main()
{
   int n;
   printf("Enter integer value:"); //which number of table you want 
   scanf("%d",&n);
   int i,mul;
   for(i=1;i<=10;i++){
    printf("%dx%d=%d\n",n,i,mul=n*i);
   }
    return 0;
}