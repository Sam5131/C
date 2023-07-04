//Write a program to remove all the break statements from Ex-1 (with switch-case construct) and try to execute the program with a few inputs. Observe the difference.
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
        
        case 2:
        printf("Enter the length of the rectangle: \n");
        scanf("%f",&len);
        printf("Enter the breadth of the rectangle: \n");
        scanf("%f",&bre);
        area=len*bre;
        printf("The area of the rectangle is: %.2f",area);
        
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
        
        default:
        printf("Invalid Input");
    }
}
// Output:
// Choose from the following:
// 1.Area of a circle
// 2.Area of a rectangle
// 3.Area of a triangle
// 1
// Enter the radius of the circle: 5
// The area of the circle is: 78.50
// Enter the length of the rectangle:
// 5
// Enter the breadth of the rectangle:
// 6
// The area of the rectangle is: 30.00
// Enter the first side of the triangle:
// 3
// Enter the second side of the triangle:
// 4
// Enter the third side of the triangle:
// 5
// The area of the triangle is: 6.00
// Invalid Input