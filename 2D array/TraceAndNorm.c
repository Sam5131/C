// Write a program to find the trace and norm of a given square matrix. Hint: Trace = sum of principal diagonal elements, Norm = sort (sum of squares of the individual elements of an array)

#include <stdio.h>
#include <math.h>

int main() {
    int mat[3][3];
    int i, j, trace = 0;
    double norm = 0;

    // User input
    printf("Enter a 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    // Calculate the trace and norm
    for (i = 0; i < 3; i++) {
        trace += mat[i][i];
        for (j = 0; j < 3; j++)
            norm += mat[i][j] * mat[i][j];
    }
    norm = sqrt(norm);

    // Print the result
    printf("Trace: %d\n", trace);
    printf("Norm: %.2f\n", norm);

    return 0;
}
// Ouput:
// Enter a 3x3 matrix:
// 1 2 3
// 4 5 6
// 7 8 9
// Trace: 15
// Norm: 16.88
//
// Logic:
// Trace is the sum of the principal diagonal elements of a square matrix.
// Norm is the square root of the sum of squares of the individual elements of a matrix.
// We can calculate the trace and norm by iterating over the matrix and adding the elements to the trace and norm.
// The trace is the sum of the diagonal elements. So, we only need to add the elements where the row and column indices are equal.
// The norm is the square root of the sum of squares of the individual elements. So, we need to add the squares of all the elements.
// We can calculate the norm by adding the squares of the elements as we iterate over the matrix.
// We can use the sqrt() function from the math.h header file to calculate the square root of the sum of squares.
// The sqrt() function returns a double value. So, we need to declare the norm variable as a double.