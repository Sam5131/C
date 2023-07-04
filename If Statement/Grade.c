/*Write a program that returns a letter grade based on a quiz score. The input will be the 
integer score from a ten-point quiz. 
a. The letter grades are assigned by: 
b. 9 - 10 “A” 7 - 8 “B” 5 - 6 “C” 3 - 4 “D” < 3 “F"*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    if(marks>=9&&marks<=10)
    {
        printf("Grade obtained is:A ");
    }
    else if(marks>=7&&marks<=8)
    {
        printf("Grade obtained is: B");
    }
    else if(marks>=5&&marks<=6)
    {
        printf("Grade obtained is: C");
    }
    else if(marks>=3&&marks<=4)
    {
        printf("Grade obtained is: D");
    }
    else if(marks<3)
    {
        printf("Grade obtained is: F");
    }
    else
    {
        printf("Invalid Input");
    }
}
// Output:
// Enter the marks: 9
// Grade obtained is:A
//
// Enter the marks: 5
// Grade obtained is: C
//
// Enter the marks: 2
// Grade obtained is: F
//
// Enter the marks: 11
// Invalid Input
//