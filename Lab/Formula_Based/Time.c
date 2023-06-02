/*Write a program to convert the time in seconds to hours, minutes, and seconds. (1 hr =3600 
sec).*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int sec,hr,min;
    printf("Enter the time in seconds: ");
    scanf("%d",&sec);
    hr=sec/3600;
    min=(sec-(3600*hr))/60;
    sec=sec-((hr*3600)+(min*60));
    printf("The time in hours, minutes and seconds is: %d:%d:%d",hr,min,sec);
    return 0;
}