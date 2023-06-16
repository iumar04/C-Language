//program to read matrix element and print its diagonal
#include <stdio.h>

int main() {
    int i, j, rows, cols;
    int matrix[100][100];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Read matrix elements from user
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf ("Matrix [%d][%d]=", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Define Matrix are: \n");
    for(int i=0; i<rows ; i++)
    {
        for(int j=0; j<cols;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    // Print diagonal elements
    printf("Diagonal elements are:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(i == j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}
