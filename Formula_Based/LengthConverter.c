/*Write a program for converting distance in mm to cm, inch, feet(1 cm =10mm, 1inch=2.5cm, 1 feet =12 inches)*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    system("cls");
    float mm,cm,inch,feet;
    printf("Enter the distance in mm: ");
    scanf("%f",&mm);
    cm=mm/10.0;
    inch=cm/2.5;
    feet=inch/12.0;
    printf("The distance in cm is: %.2f\n",cm);
    printf("The distance in inch is: %.2f\n",inch);
    printf("The distance in feet is: %.2f\n",feet);
    getch();
}
// Output:
// Enter the distance in mm: 100
// The distance in cm is: 10.00
// The distance in inch is: 4.00
// The distance in feet is: 0.33