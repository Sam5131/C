/*Write a program to convert the input temperature given in Fahrenheit to Centigrade and Centigrade to Fahrenheit.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int temp_C,temp_F;
    printf("Enter temperature in Celsius: \n");
    scanf("%d",&temp_C);
    printf("Enter temperautre in Fahrenheit: \n");
    scanf("%d",&temp_F);
    int celsius,fahrenheit;
    fahrenheit=temp_C*9/5+32;
    celsius=(temp_F-32)*5/9;
    printf("\nThe temperature in Celsius is: %d",celsius);
    printf("\nThe temperature in Fahrenheit is: %d",fahrenheit);
    getch();
}