#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int data[100],N,data1[100];
    printf("Enter the number of elements: \n");
    scanf("%d",&N);
    printf("Enter the elements: \n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&data[i]);
    }
    for(int i=0,j=N-1;i<N;i++,j--)
    {
        data1[i]=data[j];
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",data1[i]);
    }
}