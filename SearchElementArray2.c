//program to search an element in an array
#include <stdio.h>

int main() {
    int arr[100], n, i, search;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &search);

    // Search for the element
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d is present at index %d.\n", search, i);
            break;
        }
    }

    if (i == n) {
        printf("%d is not present in the array.\n", search);
    }

    return 0;
}
