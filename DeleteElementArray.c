//program to delete an element in an array
#include<stdio.h>
int main()
{
    int a[100],n,i,pos;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("%d position array is %d\n",i,a[i]);        
    }
    printf("Enter position who want to delete element");
    scanf("%d",&pos);
    if(pos>=n+i)
    {
        printf("deletion is not pos");
    }
    else
    {
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        printf("Resulting Array:");
        for(i=0;i<n-1;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}