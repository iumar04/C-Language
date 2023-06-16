//program to find largest element in an array
#include <stdio.h> 
  
int main() 
{ 
    int arr[100], size, i, max; 
  
    /* Input size of array */
    printf("Enter size of the array: "); 
    scanf("%d", &size); 
  
    /* Input array elements */
    printf("Enter elements in the array: "); 
    for(i=0; i<size; i++) 
    {
	 scanf("%d", &arr[i]); 
    } 
  
    /* Assume first element as maximum */
    max = arr[0]; 
  
    /* Find maximum element in array */
    for(i=1; i<size; i++) 
    { 
	 /* If current element is greater than max */
	if(arr[i] > max) 
	{ 
	     /* Then update max */
	     max = arr[i]; 
	} 
    } 
  
    printf("Maximum element = %d", max); 
  
    return 0; 
}   