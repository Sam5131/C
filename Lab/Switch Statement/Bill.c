/*Write a program to calculate an amount of a telephone bill for the following criteria.
(Without Loop) Calls charge per call (Rs.) 1-150 0 151-250 .9 251-400 1.2 401 onwards 1.5*/
#include <stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int calls;
    float charge;
    printf("Enter the number of calls: ");
    scanf("%d", &calls);
    switch (calls) {
        case 0 ... 150:
            charge = 0;
            break;
        case 151 ... 250:
            charge = (calls - 150) * 0.9;
            break;
        case 251 ... 400:
            charge = (calls - 250) * 1.2 + 100 * 0.9;
            break;
        default:
            charge = (calls - 400) * 1.5 + 150 * 1.2 + 100 * 0.9;
            break;
    }
    printf("The telephone bill for %d calls is: Rs. %.2f\n", calls, charge);
}
// Output:
// Enter the number of calls: 300
// The telephone bill for 300 calls is: Rs. 270.00
// Enter the number of calls: 100
// The telephone bill for 100 calls is: Rs. 0.00
// Enter the number of calls: 500
// The telephone bill for 500 calls is: Rs. 555.00