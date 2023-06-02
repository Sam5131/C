#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int n;
    printf("Enter the limit: \n");
    scanf("%d",&n);
    printf("Odd numbers in descending order: \n");
    for(int i=n;i>=1;i--)
    {
        if((i%2)!=0)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}