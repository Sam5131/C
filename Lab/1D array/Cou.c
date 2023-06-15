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