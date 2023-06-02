/*Write a program to interchange the values of two variables without using a third variable.​*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int a,b;
    printf("Enter the value of a: \n");
    scanf("%d",&a);
    printf("Enter the value of b: \n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The desired result is: \n%d\n%d",a,b);
}