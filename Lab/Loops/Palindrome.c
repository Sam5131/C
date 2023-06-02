/*Write a program to check if a number is palindrome*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int num,rem;
    int rev=0;
    system("cls");
    printf("Enter the number: \n");
    scanf("%d",&num);
    int num1=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(num1==rev)
    {
        printf("%d is a palindrome number",num1);
    }
    else
    {
        printf("%d is not a palindrome number",num1);
    }
}    