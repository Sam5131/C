/*Write a program to check whether a given year is a leap year or not.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int year;
    system("cls");
    printf("Enter the year: ");
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0)||(year%400==0))
    /*This condition has three parts connected by logical operators. Let's break them down:
    a. (year%4==0) checks whether the year is divisible by 4.
        If the remainder of the year divided by 4 is 0, then it is a potential leap year.
    b. (year%100!=0) checks whether the year is divisible by 100.
        If the year is divisible by 100, then it is not a leap year unless it is also divisible by 400
    c. (year%400==0) checks whether the year is divisible by 400.
        If the year is divisible by both 100 and 400, then it is a leap year.
    So, the condition checks whether the year is divisible by 4 and not divisible by 100,
        OR the year is divisible by 400. If either of these conditions is true,
        then we consider the year as a leap year.*/
    {
        printf("The year is a leap year");
    }
    else
    {
        printf("The year is not a leap year");
    }
}
// Output:
// Enter the year: 2000
// The year is a leap year
//
// Enter the year: 2001
// The year is not a leap year
//
// Enter the year: 2004
// The year is a leap year
//
// Enter the year: 2100
// The year is not a leap year
//