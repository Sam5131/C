// Write a program to check if the given matrix is a magic square or not.

#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j, sum, sum_diag1 = 0, sum_diag2 = 0;
    int isMagic = 1;

    // User input
    printf("Enter a 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    // Calculate the sum of the first row
    sum = 0;
    for (j = 0; j < 3; j++)
        sum += mat[0][j];

    // Check if all rows have the same sum
    for (i = 1; i < 3; i++) {
        int row_sum = 0;
        for (j = 0; j < 3; j++)
            row_sum += mat[i][j];
        if (row_sum != sum) {
            isMagic = 0;
            break;
        }
    }

    // Check if all columns have the same sum
    if (isMagic) {
        for (j = 0; j < 3; j++) {
            int col_sum = 0;
            for (i = 0; i < 3; i++)
                col_sum += mat[i][j];
            if (col_sum != sum) {
                isMagic = 0;
                break;
            }
        }
    }

    // Check if both diagonals have the same sum
    if (isMagic) {
        for (i = 0; i < 3; i++) {
            sum_diag1 += mat[i][i];
            sum_diag2 += mat[i][2-i];
        }
        if (sum_diag1 != sum || sum_diag2 != sum)
            isMagic = 0;
    }

    // Print the result
    if (isMagic)
        printf("The given matrix is a magic square.\n");
    else
        printf("The given matrix is not a magic square.\n");

    return 0;
}
// Output:
// Enter a 3x3 matrix:
// 2 7 6
// 9 5 1
// 4 3 8
// The given matrix is a magic square.
// Enter a 3x3 matrix:
// 1 2 3
// 4 5 6
// 7 8 9
// The given matrix is not a magic square.
// Logic:
// A magic square is a square matrix in which the sum of each row, column and diagonal is the same.
//
// We can check if a matrix is a magic square by calculating the sum of the first row and then checking if all rows, columns and diagonals have the same sum.
//
// We can calculate the sum of each row and column by using nested for loops.
//
// To calculate the sum of the first diagonal, we can use a single for loop and add mat[i][i] to the sum.
//
// To calculate the sum of the second diagonal, we can use a single for loop and add mat[i][2-i] to the sum.
//
// We can check if the matrix is a magic square by comparing the sum of the first row with the sum of each row, column and diagonal.
//
// If any of the sums are not equal to the sum of the first row, then the matrix is not a magic square.
//
// If all of the sums are equal to the sum of the first row, then the matrix is a magic square.
//