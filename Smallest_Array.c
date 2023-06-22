#include<stdio.h>

int main(){
    int a[20],n,i,small,pos;
    printf("Enter Size of array: ");
    scanf("%d",&n);
    printf("\n Enter elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for ( i = 0; i < n; i++)
    {
        if(small>a[i]){
            small=a[i];
            pos=i;
        }
    }
    printf("\nSmallest Value in Array is: %d",small);
    printf("\nPosition index :%d"pos);
    
    
    return 0;
}