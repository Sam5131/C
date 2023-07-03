//Write a program to reverse a string.
#include <stdio.h>
#include <string.h>
int main() {
   char str[100], temp;
   int i, j;
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
   j = strlen(str) - 2;
   for (i = 0; i < j; i++, j--) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
   }
   printf("Reversed string: %s", str);
   return 0;
}
//Output:
//Enter a string: This is a sentence.
//Reversed string: .ecnetnes a si sihT