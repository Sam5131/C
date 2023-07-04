//Write a program to find the sum of odd index numbers in an array.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int data[100],N,sum=0;
    printf("Enter the number of elements: \n");
    scanf("%d",&N);
    printf("Enter the elements: \n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&data[i]);
    }
    for(int i=0;i<N;i++)
    {
        if(i%2!=0)
        {
            sum+=data[i];
        }
    }
    printf("The sum of odd index elements is %d\n",sum);
}
// Output:
// Enter the number of elements:
// 5
// Enter the elements:
// 1 2 3 4 5
// The sum of odd index elements is 6