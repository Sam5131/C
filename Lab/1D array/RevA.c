// Write a program to reverse an array with an auxiliary array.
#include <stdio.h>
int main() {
    int arr[10];
    int n = sizeof(arr)/sizeof(arr[0]);
    int aux[n];
    int i;

    // User input
    printf("Enter 10 elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Copy the array into the auxiliary array in reverse order
    for (i = 0; i < n; i++)
        aux[i] = arr[n-i-1];

    // Copy the auxiliary array back into the original array
    for (i = 0; i < n; i++)
        arr[i] = aux[i];

    // Print the reversed array
    printf("Reversed array: ");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
// Output:
// Enter 10 elements: 1 2 3 4 5 6 7 8 9 10
// Reversed array: 10 9 8 7 6 5 4 3 2 1
// Enter 10 elements: 4 5 0 -1 -4 98 5 7 70
// Reversed array: 70 7 5 98 -4 -1 0 5 4