/* Question 7: Write a function Sort for sorting a list of names which will use a function compare to compare two names. (Selection /bubble Sort may be used). */

#include <stdio.h>
#include <string.h>

void sort(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    char arr[100][100];
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    printf("Enter the names: ");
    for (int i = 0; i < n; i++)
        scanf("%s", arr[i]);
    sort(arr, n);
    printf("Sorted names: ");
    for (int i = 0; i < n; i++)
        printf("%s ", arr[i]);
    return 0;
}
// Output:
// Enter the number of names: 5
// Enter the names: John Alice Bob David Carol
// Sorted names: Alice Bob Carol David John
//
// Logic:
// We have to sort a list of names. So, we will take the input from the user and pass it to the function sort() which will sort the names in ascending order. Finally, we will print the sorted names.
//
// The function sort() takes two arguments arr and n. arr is a two-dimensional character array and n is the number of names. The function uses the bubble sort algorithm to sort the names in ascending order. The function strcmp() is used to compare two strings. If the first string is greater than the second string, then the function returns a positive value. If the first string is less than the second string, then the function returns a negative value. If the first string is equal to the second string, then the function returns 0.
//
// For example, if arr = {"John", "Alice", "Bob", "David", "Carol"} and n = 5, then the function returns {"Alice", "Bob", "Carol", "David", "John"}.
//