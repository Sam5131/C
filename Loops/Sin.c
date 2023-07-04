/*WAP to find sum of n terms of sin series sin(x)=x-x^3/3!+x^5/5!-x^7/7! in C using loop statements only*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    system("cls");
    int n,x,fact=1;
    float sum=0.0;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    printf("Enter the value of x: \n");
    scanf("%d",&x);
    printf("sin(%d)=",x);
    for(int i=1;i<=n;i++)
    {
        if((i%2)!=0)
        {
            for(int j=((2*i)-1);j>0;j--)
            {
                fact=fact*j;
            }
            sum=sum+((pow(x,((2*i)-1)))/fact);
            printf("+%.2f",sum);
            fact=1;
        }
        else
        {
            for(int j=((2*i)-1);j>0;j--)
            {
                fact=fact*j;
            }
            sum=sum-((pow(x,((2*i)-1)))/fact);
            printf("-%.2f",sum);
            fact=1;
        }
    }
}
// Output:
// Enter the number of terms:
// 5
// Enter the value of x:
// 30
// sin(30)=+30.00-435.00+10958.00-494050.00+33978000.00