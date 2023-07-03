//Write a program to find the substring of a given string.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    system("cls");
    char sen[100],sub[100];
    printf("Enter the main string: \n");
    gets(sen);
    printf("Enter the sub string: \n");
    gets(sub);
    int l=strlen(sub);
    int i,j;
    for(i=0,j=0;sen[i]!='\0'&&sub[j]!='\0';i++)
    {
        if(sen[i]==sub[j])
        {
            j++;
        }
        else
        {
            j=0;
        }
    }
    if(j==l)
    {
        printf("The substring %s was found at position %d",sub,(i-j+1));
    }
    else
    {
        printf("Substring: %s not found",sub);
    }
}
// Output:
// Enter the main string:
// Hello World
// Enter the sub string:
// World
// The substring World was found at position 7
// Enter the main string:
// Hello World
// Enter the sub string:
// Hold
// Substring: Hold not found