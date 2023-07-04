//Write a program to design a calculator that performs addition, subtraction, minus, and division operation.
// This program inputs two operands and an operator and then displays the calculated results.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char op;
    float a,b,sum,diff,mul,quo,rem;
    system("cls");
    printf("Enter the first number: \n");
    scanf("%f",&a);
    printf("Enter the second number: \n");
    scanf("%f",&b);
    printf("Enter the operator: \n");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        sum=a+b;
        printf("The sum of %f and %f is: %f\n",a,b,sum);
        break;
        case '-':
        diff=a-b;
        printf("The difference of %f and %f is: %f\n",a,b,diff);
        break;
        case '*':
        mul=a*b;
        printf("The product of %f and %f is: %f\n",a,b,mul);
        break;
        case '/':
        quo=a/b;
        printf("The quotient of %f and %f is: %f\n",a,b,quo);
        break;
        case '%':
        rem=(int)a%(int)b;
        printf("The remainder of %f and %f is: %f\n",a,b,rem);
    }
}
// Output:
// Enter the first number:
// 10
// Enter the second number:
// 5
// Enter the operator:
// +
// The sum of 10.000000 and 5.000000 is: 15.000000