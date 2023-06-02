#include <stdio.h>
#include<stdlib.h>
void main() 
{
    system("cls");
    int units;
    float charge;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    switch (units) {
        case 0 ... 100:
            charge = 0;
            break;
        case 101 ... 200:
            charge = (units - 100) * 1.5;
            break;
        case 201 ... 400:
            charge = (units - 200) * 2.5 + 100 * 1.5;
            break;
        default:
            charge = (units - 400) * 3.5 + 200 * 2.5 + 100 * 1.5;
            break;
    }
    printf("The electricity bill for %d units is: Rs. %.2f\n", units, charge);
}
