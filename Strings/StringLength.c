//Write a program to find the string length of a string without using the predefined function.
#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
        count++;
    printf("Length of the string: %d\n", count - 1);
    return 0;
}
//Output:
//Enter a string: This is a sentence.
//Length of the string: 19