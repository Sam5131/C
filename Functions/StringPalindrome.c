/* Question 6: Write a program to check if the given string is a palindrome or not, using the string handling function. */

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str))
        printf("%s is a palindrome", str);
    else
        printf("%s is not a palindrome", str);
    return 0;
}
// Output:
// Enter a string: madam
// madam is a palindrome
//
// Logic:
// We have to check if the given string is a palindrome or not. So, we will take the input from the user and pass it to the function isPalindrome() which will return 1 if the string is a palindrome and 0 if the string is not a palindrome. Finally, we will print the result.
//
// The function isPalindrome() is a recursive function. It takes one argument str which is a string. We will use two variables l and h to store the lower and higher index of the string respectively. Initially, l is 0 and h is the length of the string - 1. We will compare the character at the lower index with the character at the higher index. If they are not equal, then the string is not a palindrome. Otherwise, we will increment l and decrement h and repeat the process until h becomes less than l. If h becomes less than l, then the string is a palindrome.
//
// For example, if str = "madam", then the string is a palindrome. So, we will compare the character at the lower index with the character at the higher index i.e. str[0] and str[4]. Since they are equal, we will increment l and decrement h and repeat the process until h becomes less than l. Finally, h becomes less than l and the string is a palindrome.
//
// The function isPalindrome() is called recursively until h becomes less than l. When h becomes less than l, the function returns 1 which means the string is a palindrome.
//