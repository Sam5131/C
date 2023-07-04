//Write a program to program to input the number of week’s days (1-7) and translate to its 
//equivalent name of the day of the week (e.g., 1 to Sunday, 2 to Monday)
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int day;
    system("cls");
    printf("Enter the number of Week day: \n");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thursday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Saturday");
        break;
        default:
        printf("Invalid input");
    }
}
// Output:
// Enter the number of Week day:
// 1
// Sunday
// Enter the number of Week day:
// 8
// Invalid input