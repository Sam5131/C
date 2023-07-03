//Write a program to determine the length of a character string using a pointer.
#include <stdio.h>
int main() {
    char str[100], *ptr;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    ptr = str;
    while (*ptr != '\0') {
        count++;
        ptr++;
    }
    printf("Length of the string: %d", count - 1);
    return 0;
}
//Output:
// Enter a string: Hello World
// Length of the string: 11