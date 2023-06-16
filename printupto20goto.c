//program to print natural no. upto 20 using goto statement

#include <stdio.h> 
int main() 
{ 
    int i = 1;
  
    // Label: 
    myloop: 
    printf(" %d\n", i); 
    i++; 
  
    // Condition for Goto Statement 
    if (i <= 20) 
        goto myloop; 
  
    return 0; 
}