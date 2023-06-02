/*Write a program to find the sum of the digits of a four-digit number (ex. 1234 sum=10) 
(without using a loop).*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    system("cls");
    int num, d1,d2,d3,d4, sum;
    printf("Enter the four digit number: \n");
    scanf("%d",&num);
    d1=num/1000;
    d2=(num%1000)/100;
    d3=(num%100)/10;
    d4=num%10;
    sum=d1+d2+d3+d4;
    printf("The sum of the digits is %d",sum);
    getch();
}