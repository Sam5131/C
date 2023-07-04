/* Question 3: Write a program to find the GCD of two numbers recursively. (Ex: GCD of 9, 24 is 3) */

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}
// Output:
// Enter two numbers: 9 24
// GCD of 9 and 24 is 3
//
// Logic:
// We have to find the GCD of two numbers. So, we will take the input from the user and pass it to the function gcd() which will return the GCD of the two numbers. Finally, we will print the GCD.
//
// The function gcd() is a recursive function. It takes two arguments a and b. If b is 0, then the GCD of a and b is a. Otherwise, the GCD of a and b is the GCD of b and a % b.
//
// For example, if a = 9 and b = 24, then the GCD of a and b is the GCD of b and a % b i.e. GCD(24, 9 % 24) = GCD(24, 9) = GCD(9, 24 % 9) = GCD(9, 6) = GCD(6, 9 % 6) = GCD(6, 3) = GCD(3, 6 % 3) = GCD(3, 0) = 3.
//
// The function gcd() is called recursively until b becomes 0. When b becomes 0, the function returns a which is the GCD of a and b.
//