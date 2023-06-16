//program to check whether given number is prime number or not
#include<stdio.h>
int main(){
  int n, i;
  int flag = 0;
  printf("Enter the Number:");
  scanf("%d", &n);
  for(i=2; i<=n/2; i++){
      if(n%i == 0){
          flag = 1;
          break;
      }
  }
  if (flag==0)
      printf("The Number is prime\n");
  else
      printf("The Number is not prime\n");
  return 0;
}