/* Question 2: Write a program to find the maximum of a given set of numbers using functions. (Use a function Max and return the result to the main function) */

#include <stdio.h>

int max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("The maximum element is %d", max(arr, n));
    return 0;
}
// Output:
// Enter the number of elements: 5
// Enter the elements: 1 2 3 4 5
// The maximum element is 5
//
// Logic:
// We have to find the maximum of a given set of numbers. So, we will take the input from the user and store it in an array. Then we will pass the array to the function max() which will return the maximum element of the array. Finally, we will print the maximum element.
//