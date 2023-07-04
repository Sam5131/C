// Write a program to reverse a given number Ex: 1234 reverse=4*10 3 +3 * 10 2 + 2 * 10 1 + 1 * 10 0 =4321
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num,rem;
    int rev=0;
    system("cls");
    printf("Enter the number: \n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("The reverse of the number is: %d",rev);
}
// Output:
// Enter the number:
// 1234
// The reverse of the number is: 4321