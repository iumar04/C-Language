//program to find sum of two matrix & take dimension of matrix & input from user
#include<stdio.h>
void main()
{
    int m,n,i,j;
    int a[m][n],b[m][n],c[m][n];
    printf("Enter the rows and columns of matrix:");
    scanf("%d %d\n",&m,&n);

    printf("Enter the elements of first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=1;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of two matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
}