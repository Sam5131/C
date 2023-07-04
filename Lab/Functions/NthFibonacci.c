/* Question 5: Write a function to generate the nth Fibonacci term using recursion. Print first N Fibonacci terms using this function. Hint: (Fibonacci series is 0, 1, 1, 2, 3, 5, 8,) */

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    return 0;
}
// Output:
// Enter the number of terms: 5
// Fibonacci Series: 0 1 1 2 3
//
// Logic:
// We have to generate the nth Fibonacci term using recursion. So, we will take the input from the user and pass it to the function fibonacci() which will return the nth Fibonacci term. Finally, we will print the first n Fibonacci terms.
//
// The function fibonacci() is a recursive function. It takes one argument n. If n is less than or equal to 0, then the function returns 0. If n is equal to 1, then the function returns 1. Otherwise, the function returns the sum of the previous two terms i.e. fibonacci(n-1) + fibonacci(n-2).
//
// For example, if n = 5, then the function returns the sum of the previous two terms i.e. fibonacci(4) + fibonacci(3) = (fibonacci(3) + fibonacci(2)) + (fibonacci(2) + fibonacci(1)) = ((fibonacci(2) + fibonacci(1)) + (fibonacci(1) + fibonacci(0))) + ((fibonacci(1) + fibonacci(0)) + fibonacci(1)) = (((fibonacci(1) + fibonacci(0)) + fibonacci(1)) + (fibonacci(1) + fibonacci(0))) + ((fibonacci(1) + fibonacci(0)) + fibonacci(1)) = (((1 + 0) + 1) + (1 + 0)) + ((1 + 0) + 1) = 5.
//