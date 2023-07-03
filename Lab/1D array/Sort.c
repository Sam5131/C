// Write a program to check whether an array is sorted or not.
#include <stdio.h>
int main() {
    int arr[10];
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    int isSorted = 1;

    // User input
    printf("Enter 10 elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Check if the array is sorted in ascending order
    for (i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            isSorted = 0;
            break;
        }
    }

    if (isSorted)
        printf("The array is sorted.\n");
    else
        printf("The array is not sorted.\n");

    return 0;
}
// Output:
// Enter 10 elements: 1 2 3 4 5 6 7 8 9 10
// The array is sorted.
// Enter 10 elements: 4 5 0 -1 -4 98 5 7 70
// The array is not sorted.