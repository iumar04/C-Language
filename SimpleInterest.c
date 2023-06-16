//program to calculate simple interest in c
#include <stdio.h>

int main()
{
    float p,r,t,SI;

    printf ( "Enter Principal Amount:" );
    scanf ( "%f",&p );
    printf ( "Enter Rate:" ); //in percent
    scanf ( "%f",&r );
    printf ( "Enter Time:" ); //In year
    scanf ( "%f",&t );
    SI = p * r * t / 100;
    printf ( "Simple Interest=%.3f",SI );

    return 0;
}
