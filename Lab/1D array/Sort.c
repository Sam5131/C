#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    printf("Enter the number of elements: \n");
    int data[100],N,temp;
    scanf("%d",&N);
    printf("Enter the elements: \n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&data[i]);
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j+1];
                data[j+1]=data[j];
                data[j]=temp;
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",data[i]);
    }
}