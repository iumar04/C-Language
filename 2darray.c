#include <stdio.h>
int main()
{
    int marks[4][4]={{56,54,89,21},{98,45,87,65},{56,25,35,75},{56,98,24,26}};
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
        //printf("the value of %d,%d element of the array is %d\n",i,j,marks[i][j]);
        printf("%d ",marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}