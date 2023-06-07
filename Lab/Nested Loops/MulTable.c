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