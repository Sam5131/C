// Write a program for searching for an element in the matrix and counting the number of occurrences of that element.

#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j, x, count = 0;

    // User input
    printf("Enter a 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    printf("Enter the element to search for: ");
    scanf("%d", &x);

    // Search for the element and count its occurrences
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (mat[i][j] == x)
                count++;

    // Print the result
    printf("The element %d occurs %d times in the matrix.\n", x, count);

    return 0;
}
// Output:
// Enter a 3x3 matrix:
// 1 2 3    
// 4 5 6
// 7 8 9
// Enter the element to search for: 5
// The element 5 occurs 1 times in the matrix.
//
// Enter a 3x3 matrix:
// 1 2 3
// 4 5 6
// 7 8 9
// Enter the element to search for: 10
// The element 10 occurs 0 times in the matrix.
//
// Logic:
// We can search for an element in a matrix by traversing the matrix and comparing each element with the given element.
// If the element is found, we increment the count.
//