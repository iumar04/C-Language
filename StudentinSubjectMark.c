//program to print 3 students marks in 2 subject using array
#include<stdio.h>
int main(){
	int marks[3][2];
	int i,j;

	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
        	printf("Enter %d student marks in %d subject:",i+1,j+1);
			scanf(" %d",&marks[i][j]);
		}
        printf("\n");
	}
	printf("\nMarks of 3 students in 2 subjects are:\n......................\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
        	printf("The marks of %d student in %d subject:%d\n",i+1,j+1,marks[i][j]);
		}
		printf("\n");
	}
	return 0;
}