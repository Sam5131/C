//Write a program to find the largest and smallest element in an array.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int data[100],N,temp;
    printf("Enter the number of elements: \n");
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
    printf("The largest element is %d \n",data[N-1]);
    printf("The smallest element is %d \n",data[0]);
}
// Output:
// Enter the number of elements:
// 4
// Enter the elements:
// 2 0 -1 3
// The largest element is 3
// The smallest element is -1