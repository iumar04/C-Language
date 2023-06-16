//program to print even no. upto 20 using goto statement
#include <stdio.h>
 
int main()
{
   int i = 0;
   // Executing the loop
   myloop:
   printf("%d\n", i);
   i = i + 2;
 
   if (i <= 20)
   {
       goto myloop;
   }
 
   return 0;
}