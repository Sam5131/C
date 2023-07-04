//Write a program to check if the given string is a palindrome or not.
#include <stdio.h>
#include <string.h>
int main() {
   char str[100];
   int i, j, palindrome = 1;
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
   j = strlen(str) - 2;
   for (i = 0; i < j; i++, j--)
      if (str[i] != str[j]) {
         palindrome = 0;
         break;
      }
   if (palindrome == 1)
      printf("The given string is a palindrome\n");
   else
      printf("The given string is not a palindrome\n");
   return 0;
}
//Output:
//Enter a string: madam
//The given string is a palindrome
//Enter a string: hello
//The given string is not a palindrome