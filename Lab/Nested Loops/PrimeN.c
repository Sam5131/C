#include <stdio.h>
#include <math.h>

// Function to calculate the power of a number
int power(int num, int p) {
    int result = 1;
    while (p > 0) {
        result *= num;
        p--;
    }
    return result;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int temp = num;
    int numDigits = 0;
    int sum = 0;
    
    // Count the number of digits in the number
    while (temp > 0) {
        numDigits++;
        temp /= 10;
    }
    
    // Calculate the sum of the digits raised to the power of the number of digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += power(digit, numDigits);
        temp /= 10;
    }
    
    // Check if the sum is equal to the original number
    if (sum == num) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n, count = 0, num = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    while (count < n) {
        num++;
        if (isArmstrong(num)) {
            count++;
        }
    }
    
    printf("The %dth Armstrong number is: %d", n, num);
    
    return 0;
}
