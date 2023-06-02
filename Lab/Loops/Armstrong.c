/*Write a program to check if a number is armstrong number i.e sums of the cubes of the digits is eual to the number*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    system("cls");
    int num,rem;
    int sum=0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    int num1=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+pow(rem,3);
        num=num/10;
    }
    if(num1==sum)
    {
        printf("%d is an armstrong number",num1);
    }
    else
    {
        printf("%d is not an armstrong number",num1);
    }
}