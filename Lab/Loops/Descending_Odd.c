//Write a program to take N as input and print the odd numbers in descending order.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int n;
    printf("Enter the limit: \n");
    scanf("%d",&n);
    printf("Odd numbers in descending order: \n");
    for(int i=n;i>=1;i--)
    {
        if((i%2)!=0)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
// Output:
// Enter the limit:
// 10
// Odd numbers in descending order:
// 9
// 7
// 5
// 3
// 1