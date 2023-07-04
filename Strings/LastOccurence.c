//Write a program to find the last occurrence of a particular character.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int i, index = -1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            index = i;
    if (index == -1)
        printf("Character not found\n");
    else
        printf("Last occurrence of %c is at position %d\n", ch, index + 1);
    return 0;
}
//Output:
//Enter a string: This is a sentence.
//Enter a character: s
//Last occurrence of s is at position 15