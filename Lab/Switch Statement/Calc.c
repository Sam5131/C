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