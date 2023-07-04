// Write a program to find whether a given matrix is symmetric or not. Hint: A = AT

#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j;
    int isSymmetric = 1;

    // User input
    printf("Enter a 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    // Check if the matrix is symmetric
    for (i = 0; i < 3; i++) {
        for (j = 0; j < i; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Print the result
    if (isSymmetric)
        printf("The given matrix is symmetric.\n");
    else
        printf("The given matrix is not symmetric.\n");

    return 0;
}
// Output:
// Enter a 3x3 matrix:
// 1 2 3
// 2 4 5
// 3 5 6
// The given matrix is symmetric.
//
// Enter a 3x3 matrix:
// 1 2 3
// 4 5 6
// 7 8 9
// The given matrix is not symmetric.
//
// Logic:
// The matrix is symmetric if it is equal to its transpose. So, we need to check if A = AT.
// We can do this by comparing the elements of A and AT. If any element is not equal, then A is not equal to AT.
// We can reduce the number of comparisons by only checking the upper triangular part of A and AT.
// This is because the lower triangular part of A is the upper triangular part of AT.
// So, we only need to check the upper triangular part of A and AT.