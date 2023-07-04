/*Write a program that takes three sides of a triangle input and calculates its area, if these 
conditions are satisfied a+b>c, b+c>a, a+c>b, calculate area=(a+b+c)/2 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    system("cls");
    float area;
    float a,b,c,s;
    printf("Enter the first side of triangle: ");
    scanf("%f",&a);
    printf("Enter the second side of triangle: ");
    scanf("%f",&b);
    printf("Enter the third side of triangle: ");
    scanf("%f",&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        s=0.5*(a+b+c);
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of the triangle is: %.2f",area);
    }
    else
    {
        printf("The triangle is invalid");
    }
}
// Output:
// Enter the first side of triangle: 3
// Enter the second side of triangle: 4
// Enter the third side of triangle: 5
//
// The area of the triangle is: 6.00
//
// Enter the first side of triangle: 3
// Enter the second side of triangle: 4
// Enter the third side of triangle: 8
//
// The triangle is invalid