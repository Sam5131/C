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
