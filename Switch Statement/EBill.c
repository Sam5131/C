/*Write a program to calculate the amount of an electricity bill for the following criteria. 
(Without Loop) 
Units charge per unit (Rs.) 
First, 1-100 up to 0 
Next, 101-200 up to 1.5 
Next, 201-400 up to 2.5 
401 onwards 3.5*/
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
// Output:
// Enter the number of units consumed: 250
// The electricity bill for 250 units is: Rs. 375.00
//
// Enter the number of units consumed: 100
// The electricity bill for 100 units is: Rs. 0.00
//
// Enter the number of units consumed: 150
// The electricity bill for 150 units is: Rs. 75.00