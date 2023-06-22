#include<stdio.h>
#define N 100
int main(){
    int arr[N],n,i;
    printf("Enter the Size of Array: ");
    scanf("%d",&n);
    printf("\nEnter elements fo array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nPrint original value---");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nArray is reverse order---");
    for (i = n-1; i>=0; i--)
    {
        printf("%d\t",arr[i]);
    }
    
    
    
}