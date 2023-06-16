//program to take value from user & store them in an array, print the elements stored in array
#include <stdio.h>

int main() {
    // Declare an array with a fixed size of 10
    int values[10];

    // Read in values from the user
        printf("Enter a value: ");
    for (int i = 0; i < 10; i++) {

        scanf("%d", &values[i]);
    }

    // Print the values in the array
    printf("The values you entered are:\n ");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", values[i]);
    }
    

    return 0;
}
