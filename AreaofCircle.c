//program to area and circumference of circle in c
#include <stdio.h>

int main()
{

    float a,r,Pi=3.14;

    printf ("Enter Radius:");
    scanf ("%f",&r);
    printf ("Area  of circle:%.3f",Pi*r*r);
    printf ("\nCircumference of circle:%.3f",2*Pi*r);

    return 0;
}
