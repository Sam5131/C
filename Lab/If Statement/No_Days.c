/*Write a program to find the total no. of days for a given number of months counting from 
January month. 
a. Example: m=3, days=31+ (28 0r 29) + 31.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int days=31;
    int month;
    printf("Enter the month: ");
    scanf("%d",&month);
    if(month>=1&&month<=12)
    {
        if(month==1)
        {
            printf("Number of days is:%d",days);
        }
        days=days+28;
        if(month==2)
        {
            printf("Number of days is:%d",days);
        }
        days=days+31;
        if(month==3)
        {
            printf("Number of days is:%d",days);
        }
        days=days+30;
        if(month==4)
        {
            printf("Number of days is:%d",days);
        }
        days=days+31;
        if(month==5)
        {
            printf("Number of days is:%d",days);
        }
        days=days+30;
        if(month==6)
        {
            printf("Number of days is:%d",days);
        }
        days=days+31;
        if(month==7)
        {
            printf("Number of days is:%d",days);
        }
        days=days+31;
        if(month==8)
        {
            printf("Number of days is:%d",days);
        }
        days=days+30;
        if(month==9)
        {
            printf("Number of days is:%d",days);
        }
        days=days+31;
        if(month==10)
        {
            printf("Number of days is:%d",days);
        }
        days=days+30;
        if(month==11)
        {
            printf("Number of days is:%d",days);
        }
        days=days+31;
        if(month==12)
        {
            printf("Number of days is:%d",days);
        }
    }
    else
    {
        printf("invalid input");
    }
}
// Output:
// Enter the month: 2
// Number of days is:59
//
// Enter the month: 4
// Number of days is:120
//
// Enter the month: 12
// Number of days is:365