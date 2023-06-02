/*Write a program to evaluate the area of the circle*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    system("cls");
    float r,area;
    const float pi = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area=pow(r,2)*pi;
    printf("The area of the circle is %f",area);
    getch();
}