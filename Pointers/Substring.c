//Write a program to determine whether a substring (string 1) is in the main string or not. If present, return the pointer of the first occurrence.
#include <stdio.h>
#include <string.h>
char* find_substring(char* str1, char* str2) {
   char* p1, * p2, * p3;
   int i = 0, j = 0;
   p1 = str1;
   p2 = str2;
   for (i = 0; i < strlen(str1); i++) {
      if (*p1 == *p2) {
         p3 = p1;
         for (j = 0; j < strlen(str2); j++) {
            if (*p3 == *p2) {
               p3++;
               p2++;
            }
            else
               break;
         }
         p2 = str2;
         if (j == strlen(str2))
            return p1;
      }
      p1++;
   }
   return NULL;
}
int main() {
   char str1[100], str2[100], * ptr;
   printf("Enter main string: ");
   fgets(str1, sizeof(str1), stdin);
   str1[strlen(str1) - 1] = '\0';
   printf("Enter substring: ");
   fgets(str2, sizeof(str2), stdin);
   str2[strlen(str2) - 1] = '\0';
   ptr = find_substring(str1, str2);
   if (ptr != NULL)
      printf("Substring found at position %ld\n", ptr - str1 + 1);
   else
      printf("Substring not found\n");
   return 0;
}
// Output:
// Enter main string: Hello World
// Enter substring: World
// Substring found at position 7