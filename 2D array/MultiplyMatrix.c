// Write a program to multiply two matrices.

#include <stdio.h>

int main() {
    int mat1[2][3], mat2[3][4], mat3[2][4];
    int i, j, k;

    // User input
    printf("Enter a matrix of size 2x3:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter a matrix of size 3x4:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &mat2[i][j]);

    // Multiply the two matrices
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            mat3[i][j] = 0;
            for (k = 0; k < 3; k++)
                mat3[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    // Print the result
    printf("Resultant matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++)
            printf("%d ", mat3[i][j]);
        printf("\n");
    }

    return 0;
}
// Output:
// Enter a matrix of size 2x3:
// 1 2 3
// 4 5 6
// Enter a matrix of size 3x4:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Resultant matrix:
// 38 44 50 56
// 83 98 113 128
// Logic:
// The product of two matrices A and B is a matrix C such that Cij = Aik * Bkj.
// So, we need to multiply each element of A with each element of B and add them.
// This can be done using three nested loops.
// The outermost loop iterates over the rows of A.
// The middle loop iterates over the columns of B.
// The innermost loop iterates over the columns of A and rows of B.
// The innermost loop is used to multiply the elements of A and B and add them.
// The middle loop is used to iterate over the columns of B.
// The outermost loop is used to iterate over the rows of A.
// The outermost loop is used to iterate over the rows of C.
// The middle loop is used to iterate over the columns of C.