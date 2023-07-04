/*Write a program to find out the distance between two points (x1, y1) and (x2, y2)*/
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
void main()
{
    system("cls");
    float x1,y1,x2,y2;
    printf("Enter the x1 and y1 coordinates of the first point\n");
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("Enter the x2 and y2 coordinates of the second point\n");
    scanf("%f",&x2);
    scanf("%f",&y2);
    float distance;
    distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("The distance between the two points is %f",distance);
    getch();
}
// Output:
// Enter the x1 and y1 coordinates of the first point
//
// 2
// 3
// Enter the x2 and y2 coordinates of the second point
//
// 4
// 5
// The distance between the two points is 2.828427
//