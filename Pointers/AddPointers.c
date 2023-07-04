//Write a program to access two integers using pointers and add them.
#include <stdio.h>
int main() {
    int a, b, *p1, *p2, sum;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;
    printf("Sum = %d", sum);
    return 0;
}
//Output:
// Enter two integers: 10 20
// Sum = 30