//Write a program to concatenate/length/copy two strings using the library function.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';
    printf("Length of first string: %ld\n", strlen(str1));
    printf("Length of second string: %ld\n", strlen(str2));
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    strcpy(str1, str2);
    printf("First string after copying from second string: %s\n", str1);
    return 0;
}
//Output:
//Enter first string: This is a sentence.
//Enter second string: This is another sentence.
//Length of first string: 19
//Length of second string: 25
//Concatenated string: This is a sentence.This is another sentence.
//First string after copying from second string: This is another sentence.