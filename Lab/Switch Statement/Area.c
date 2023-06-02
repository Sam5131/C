#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    system("cls");
    float a,b,c,area,s,len,bre,r;
    int choice;
    printf("Choose from the following: \n");
    printf("1.Area of a circle \n");
    printf("2.Area of a rectangle\n");
    printf("3.Area of a triangle\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the radius of the circle: ");
        scanf("%f",&r);
        area=3.14*r*r;
        printf("The area of the circle is: %.2f",area);
        break;
        case 2:
        printf("Enter the length of the rectangle: \n");
        scanf("%f",&len);
        printf("Enter the breadth of the rectangle: \n");
        scanf("%f",&bre);
        area=len*bre;
        printf("The area of the rectangle is: %.2f",area);
        break;
        case 3:
        printf("Enter the first side of the triangle: \n");
        scanf("%f",&a);
        printf("Enter the second side of the triangle: \n");
        scanf("%f",&b);
        printf("Enter the third side of the triangle: \n");
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
        break;
        default:
        printf("Invalid Input");
    }
}