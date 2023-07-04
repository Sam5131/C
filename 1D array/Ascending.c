// Write a program to arrange the elements of an array in ascending order by a simple sorting method (Selection sort/bubble sort).
#include <stdio.h>
int main() {
    int arr[10];
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j;

    // User input
    printf("Enter 10 elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Selection sort
    for (i = 0; i < n-1; i++) {
        int min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
//Output:
// Enter 10 elements: 1 3 5 7 9 2 4 6 8 10
// Sorted array: 1 2 3 4 5 6 7 8 9 10