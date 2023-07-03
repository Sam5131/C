//Write a program to find the number of positive numbers, negative numbers, odd numbers, even numbers, and the number of 0 of an array.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int data[100],N;
    int C=0,PE=0,PO=0,NO=0,NE=0;
    printf("Enter the number of elements: \n");
    scanf("%d",&N);
    printf("Enter the elements: \n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&data[i]);
        if(data[i]==0)
        {
            C++;
        }
        else if(data[i]%2==0)
        {
            if(data[i]<0)
            {
                NE++;
            }
            else
            {
                PE++;
            }
        }
        else
        {
            if(data[i]<0)
            {
                NO++;
            }
            else
            {
                PO++;
            }
        }
    }
    printf("Number of zero elements: %d\n",C);
    printf("Number of positive even elements: %d\n",PE);
    printf("Number of negative even elements: %d\n",NE);
    printf("Number of positive odd elements: %d\n",PO);
    printf("Number of negative odd elements: %d\n",NO);
}
// Output:
// Enter the number of elements:
// 4
// Enter the elements:
// 2 0 -1 3
// Number of zero elements: 1
// Number of positive even elements: 1
// Number of negative even elements: 0
// Number of positive odd elements: 1
// Number of negative odd elements: 1