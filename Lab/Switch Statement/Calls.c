#include<stdio.h>
#include<stdlib.h>
void main() 
{
    system("cls");
    int calls;
    float bill = 0.0;
    printf("Enter the number of calls: ");
    scanf("%d", &calls);

    switch (calls) 
    {
        case 1 ... 100:
            bill = 200.0;
            break;
        case 101 ... 150:
            bill = 200.0 + 0.60 * (calls - 100);
            break;
        case 151 ... 200:
            bill = 200.0 + 0.60 * 50 + 0.50 * (calls - 150);
            break;
        default:
            bill = 200.0 + 0.60 * 50 + 0.50 * 50 + 0.40 * (calls - 200);
            break;
    }

    printf("Your bill is Rs. %.2f\n", bill);
}
