//Write a program to print the Fibonacci number. Hint: (Fibonacci series is 0, 1, 1, 2, 3, 5, 8,)
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int n;
    int t1=0;
    int t2=1;
    int t3=t1+t2;
    printf("Enter the limit of Fibonacci series:\n ");
    scanf("%d",&n);
    printf("The fibonacci series: %d, %d, ",t1,t2);
    for(int i=3;i<=n;++i)
    {
        printf("%d, ",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
}
// Output:
// Enter the limit of Fibonacci series:
// 10
// The fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,