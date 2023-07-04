/* Question 4: Write a program to check whether the given number is prime or not. Using this function generates first n prime numbers using the above function. */

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
    return 0;
}
// Output:
// Enter a number: 5
// 5 is a prime number
//
// Logic:
// We have to check whether the given number is prime or not. So, we will take the input from the user and pass it to the function isPrime() which will return 1 if the number is prime and 0 if the number is not prime. Finally, we will print the result.
//
// The function isPrime() is a recursive function. It takes one argument n. If n is less than or equal to 1, then the number is not prime. Otherwise, we will check if n is divisible by any number from 2 to n - 1. If n is divisible by any number from 2 to n - 1, then the number is not prime. Otherwise, the number is prime.
//
// For example, if n = 5, then the number is prime. So, we will check if n is divisible by any number from 2 to n - 1 i.e. 2 to 4. Since n is not divisible by any number from 2 to 4, the number is prime.
//
// The function isPrime() is called recursively until n becomes 1. When n becomes 1, the function returns 0 which means the number is not prime.
//