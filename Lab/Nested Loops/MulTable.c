//Write a program to generate the multiplication table for n numbers up to k terms (nested loops). Hint: 1 2 3 4 5 …. K 2 4 6 8 10 … 2k ………………. ………………… n ………………. nK
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int n,k;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter the value of k: \n");
    scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d*%d=%d",i,j,(i*j));
            printf("\t");
        }
        printf("\n");
    }
}
// Output:
// Enter the value of n:
// 5
// Enter the value of k:
// 5
// 1*1=1   1*2=2   1*3=3   1*4=4   1*5=5
// 2*1=2   2*2=4   2*3=6   2*4=8   2*5=10
// 3*1=3   3*2=6   3*3=9   3*4=12  3*5=15
// 4*1=4   4*2=8   4*3=12  4*4=16  4*5=20
// 5*1=5   5*2=10  5*3=15  5*4=20  5*5=25
//