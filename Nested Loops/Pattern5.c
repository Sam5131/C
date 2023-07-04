/*
1
2 4
3 5 7
6 8 10 12
9 11 13 15 17*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int i,j,o=1,e=2;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("%d ",o);
                o=o+2;
            }
            else
            {
                printf("%d ",e);
                e=e+2;
            }
        }
        printf("\n");
    }
}