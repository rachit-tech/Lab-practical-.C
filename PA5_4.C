/* Write aC program  to read two matrices and perform matrix Addition using a 2-D aray*/
#include <stdio.h>

int main() {
    int row, column, i, j;

    
    printf("Enter the number of rows and columns for the matrices: ");
    
    if (scanf("%d %d", &row, &column) != 2 || row <= 0 || column <= 0) {
        printf("Invalid input for dimensions. Please enter positive integers.\n");
        return 1;
    }

    
    int matrixA[row][column], matrixB[row][column], sumMatrix[row][column];

    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            printf("Enter element A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            printf("Enter element B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixB[i][j]);
        }
    }

    
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }


    printf("\nSum of the two matrices:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
        
            printf("%4d ", sumMatrix[i][j]);
        }
    
        printf("\n");
    }

    return 0;
}
