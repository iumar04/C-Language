//Program to create an array using pointer
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    // create array using pointer
    int *arr = (int *)malloc(n * sizeof(int));

    // initialize array elements
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    // print array elements
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // free memory
    free(arr);

    return 0;
}
