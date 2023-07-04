/* Question 5: Write a program to print that Nth the Armstrong number. */

#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    return (n == sum);
}

int main() {
    int n, count = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 1; count < n; i++) {
        if (isArmstrong(i)) {
            count++;
            if (count == n)
                printf("The %dth Armstrong number is %d", n, i);
        }
    }
    return 0;
}
// Output:
/*
Enter the value of N: 15
The 15th Armstrong number is 9474
*/