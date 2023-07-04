/* Question 8: Write a program to calculate the discount in rupees for the following criterion. (Without Loop) 
Cost price discount 
>=800 25% 
500-800 20% 
<500 no discount (0%) */

#include <stdio.h>

int main() {
    float cost, discount;
    printf("Enter the cost price: ");
    scanf("%f", &cost);
    if (cost >= 800)
        discount = cost * 0.25;
    else if (cost >= 500 && cost < 800)
        discount = cost * 0.2;
    else
        discount = 0;
    printf("Discount: %.2f", discount);
    return 0;
}
// Output:
// Enter the cost price: 1000
// Discount: 250.00
//
// Enter the cost price: 700
// Discount: 140.00
//
// Enter the cost price: 400
// Discount: 0.00