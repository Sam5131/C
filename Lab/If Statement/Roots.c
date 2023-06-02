/*Write a program to find the roots of a quadratic equation. 
a. Hint: root = -b +/- sqrt(b2-4ac)/2a*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    system("cls");
    float a,b,c,x1,x2;
    printf("Enter the coefficients of the equation: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a!=0)
    {
        if(((b*b)-4*a*c)>=0)
        {
            x1=((-b)+sqrt(((b*b)-4*a*c))/(2*a));
            x2=((-b)-sqrt(((b*b)-4*a*c))/(2*a));
            printf("The roots of the equation are:%f, %f",x1,x2);
        }
        else
        {
            printf("The equation have imaginary roots");
        }
    }
}