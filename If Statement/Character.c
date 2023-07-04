/*. Write a program to check whether the given character is a vowel, consonant, or digit.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("The character is a vowel");
        }
        else
        {
            printf("The character is a consonant");
        }
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("The character is a digit");
    }
    else
    {
        printf("Invalid Input");
    }
}
// Output:
// Enter a character: a
// The character is a vowel
//
// Enter a character: 5
// The character is a digit
//
// Enter a character: #
// Invalid Input
//
// Enter a character: B
// The character is a consonant
//