/*whether a person can vote*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int age;
    system("cls");
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age>=18)             //Condition checks 18 years
    {
        printf("You are eligible to vote\n");
    }
    else
    {
        printf("You are not eligible to vote\n");
    }
    getch();
}