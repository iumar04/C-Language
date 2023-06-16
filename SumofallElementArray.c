//program to find sum of all the element of array
#include<stdio.h>
int main(){
	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);
	int a[size],i,sum=0;
	printf("Enter elements of array\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of all elements of array=%d\n",sum);
	return 0;
}