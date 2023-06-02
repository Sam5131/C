/*WAP to input decimal and display binary*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    system("cls");
    int n,rem; int bin=0;int base=1;
    printf("Enter the number: \n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        bin=bin+rem*base;
        n=n/2;
        base=base*10;
    }
    printf("The number in binary is: %d ",bin);
}