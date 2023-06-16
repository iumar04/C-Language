//program to find difference of matrix
#include<stdio.h>

int main()
{
	int a[2][2],b[2][2],i,j,d[2][2];
	printf("\nEnter the elements of matrix A:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("A[%d][%d] = ", i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements of matrix B:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("B[%d][%d] = ", i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nResultant Matrix D = A - B is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			d[i][j] = a[i][j] - b[i][j];
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}