//Write a program to find the substring of a given string.
#include <stdio.h>
#include <string.h>
int main() {
   char str1[100], str2[100];
   int i, j, found;
   printf("Enter main string: ");
   fgets(str1, sizeof(str1), stdin);
   printf("Enter substring: ");
   fgets(str2, sizeof(str2), stdin);
   str1[strlen(str1) - 1] = '\0';
   str2[strlen(str2) - 1] = '\0';
   for (i = 0; i <= strlen(str1) - strlen(str2); i++) {
      found = 1;
      for (j = 0; j < strlen(str2); j++)
         if (str1[i + j] != str2[j]) {
            found = 0;
            break;
         }
      if (found == 1)
         break;
   }
   if (found == 1)
      printf("Substring found at position %d\n", i + 1);
   else
      printf("Substring not found\n");
   return 0;
}
//Output:
//Enter main string: This is a sentence.
//Enter substring: is
//Substring found at position 3
//Enter main string: This is a sentence.
//Enter substring: was
//Substring not found