/*Write a program to check whether the given number is odd or even.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int num;
    printf("Enter a  number: ");
    scanf("%d",&num);
    if(num%2==0&&num!=0)
    {
        printf("The number is even");
    }
    else if(num==0)
    {
        printf("The number is zero");
    }
    else
    {
        printf("The number is odd");
    }
}