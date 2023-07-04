//Write a program to count the number of words in a sentence.
#include <stdio.h>
int main() {
   char str[100];
   int i, count = 0;
   printf("Enter a sentence: ");
   fgets(str, sizeof(str), stdin);
   for (i = 0; str[i] != '\0'; i++)
      if (str[i] == ' ' && str[i + 1] != ' ')
         count++;
   printf("Number of words in the sentence: %d\n", count + 1);
   return 0;
}
//Output:
//Enter a sentence: This is a sentence.
//Number of words in the sentence: 4
