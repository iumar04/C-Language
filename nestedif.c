#include <stdio.h>
int main(){
    int num;
    printf ("Enter a no.:");
    scanf ("%d",&num);
    if (num>=0){
        printf ("Positive No.");
        if (num%2==0){
            printf ("\nEven no.");
        }
        else {
            printf ("\nOdd no.");
        }
    }
    else {
        printf ("Negative No.");
    }
    return 0;
}