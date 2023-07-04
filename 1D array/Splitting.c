// Write a program to take an array of 10 elements. Split it into the middle and store the elements in two different arrays.
#include <stdio.h>
int main() {
    int arr[10];
    int n = sizeof(arr)/sizeof(arr[0]);
    int arr1[5], arr2[5];
    int i;

    // User input
    printf("Enter 10 elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Split the array into two
    for (i = 0; i < n/2; i++) {
        arr1[i] = arr[i];
        arr2[i] = arr[n/2 + i];
    }

    // Print the two arrays
    printf("First array: ");
    for (i=0; i < n/2; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    printf("Second array: ");
    for (i=0; i < n/2; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}
// Output:
// Enter 10 elements: 1 2 3 4 5 6 7 8 9 10
// First array: 1 2 3 4 5
// Second array: 6 7 8 9 10