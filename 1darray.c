#include <stdio.h>
int main()
{
    int marks[8];
    for(int i=0; i<8;i++)
    {
        printf("Enter the value of %d element of the array:",i);
        scanf(" %d",&marks[i]);
    }
    for(int i=0; i<8;i++)
    {
        printf("the value of %d element of the array is %d\n",i,marks[i]);
    }

    return 0;
}