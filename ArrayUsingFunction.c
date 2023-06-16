//program to print an array using function
#include <stdio.h>

void printArray(int arr[], int size) {
    printf("Array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // call printArray function
    printArray(arr, size);

    return 0;
}
