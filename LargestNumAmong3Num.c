//Find largest no. among three no.
#include<stdio.h>

int main()
{
    int a,b,c;

    printf ("Enter NUM:");
    scanf ("%d%d%d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf ("%d is largest",a);
    }
    if (b>a && b>c)
    {
        printf ("%d is largest",b);
    }
    if (c>a && c>b)
    {
        printf ("%d is largest",c);
    }
    
    return 0;
}


