/*Write a program to calculate a bill for internet browsing. The conditions are given below: 
Minimum Rs. 200 for up to 100 calls. 
Plus, Rs. 0.60 per call for the next 50 calls. 
Plus, Rs. 0.50 per call for the next 50 calls. 
Plus, Rs. 0.40 per call for any call beyond 200 call*/
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
// Output:
// Enter the number of calls: 250
// Your bill is Rs. 290.00
// Enter the number of calls: 100
// Your bill is Rs. 200.00
// Enter the number of calls: 150
// Your bill is Rs. 230.00