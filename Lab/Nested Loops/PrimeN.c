/* Question 4: Write a program to print that Nth the prime number. */

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
    int n, count = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 2; count < n; i++) {
        if (isPrime(i)) {
            count++;
            if (count == n)
                printf("The %dth prime number is %d", n, i);
        }
    }
    return 0;
}
// Output:
/*
Enter the value of N: 15
The 15th prime number is 47
*/