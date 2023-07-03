//Write a program to find out the greatest and smallest number among three numbers using pointers.
#include <stdio.h>
int main() {
    int a, b, c, *p1, *p2, *p3;
    printf("Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    if (*p1 > *p2 && *p1 > *p3)
        printf("%d is the greatest", *p1);
    else if (*p2 > *p3)
        printf("%d is the greatest", *p2);
    else
        printf("%d is the greatest", *p3);
    if (*p1 < *p2 && *p1 < *p3)
        printf("\n%d is the smallest", *p1);
    else if (*p2 < *p3)
        printf("\n%d is the smallest", *p2);
    else
        printf("\n%d is the smallest", *p3);
    return 0;
}
//Output:
// Enter three integers: 10 20 30
// 30 is the greatest
// 10 is the smallest