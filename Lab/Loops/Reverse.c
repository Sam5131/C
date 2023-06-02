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