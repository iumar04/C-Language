//program to sorting the element in array
#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Element are is ascending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}