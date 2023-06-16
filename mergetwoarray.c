//program to merge two array take elements from user
#include<stdio.h>
void main()
{
	int n,m;
	printf("Enter Size of Array1: ");
	scanf("%d",&n);
	
	int arr1[n];
	
	printf("Enter Array1 Elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d\t ",&arr1[i]);
	}
	
	printf("Enter Size of Array2: ");
	scanf("%d",&m);
	
	int arr2[m];
	
	printf("Enter Array2 Elements: ");
	for(int i=0;i<m;i++)
	{
		scanf("%d\t ",&arr2[i]);
	}
	
	int arr3[n+m];
	
	for(int i=0;i<n;i++)
	{
		arr3[i] = arr1[i];
	}
	
	for(int j=n;j<n+m;j++)
	{
		arr3[j] = arr2[j-n];
	} 
	
	printf("\nArray3 after Merging...\n");
	for(int i=0;i<n+m;i++)
	{
		printf("%d ",arr3[i]);
	}
}