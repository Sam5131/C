/*Write a program to check if a number input is a multiple of other input number*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int num1,num2;
    printf("Enter a number:");
    scanf("%d",&num1);
    printf("Enter another number:");
    scanf("%d",&num2);
    if(num1%num2==0)
    {
        printf("%d is a multiple of %d",num1,num2);
    }
    else if(num2%num1==0)
    {
        printf("%d is a multiple of %d",num2,num1);
    }
    else
    {
        printf("%d is not a multiple of %d",num1,num2);
    }
}