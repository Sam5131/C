//Write a program to change all lower-case letters into upper case in a sentence.
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
    printf("Upper case sentence: %s", str);
    return 0;
}
//Output:
//Enter a sentence: This is a sentence.
//Upper case sentence: THIS IS A SENTENCE.