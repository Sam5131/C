/*Write a program to interchange the values of two variables using a third variable.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int a,b,c;
    printf("Enter the value of a: \n");
    scanf("%d",&a);
    printf("Enter the value of b: \n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The desired result is: \n%d\n%d",a,b);
}
// Output:
// Enter the value of a:
// 5
// Enter the value of b:
// 10
// The desired result is:
// 10
// 5