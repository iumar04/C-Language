//program to perform traversal in an array
#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    printf("Elements in the array are:\n");

    // Traverse the array using a for loop
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
