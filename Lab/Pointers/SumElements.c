//Write a program to compute the sum of all elements stored in an array using a pointer.
#include <stdio.h>
int main() {
    int arr[100], n, i, sum = 0, *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    ptr = arr;
    for (i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    printf("Sum of array elements: %d", sum);
}
// Output:
// Enter the number of elements: 5
// Enter elements: 1 2 3 4 5
// Sum of array elements: 15