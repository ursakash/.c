#include<stdio.h>
int main()
{
    int year;
    printf("enter year number");
    scanf("%d",&year);
    if(year%100)
    {
        if(year%4)
        printf("not leap year");
        else
        printf("leap year");

    }
    else
    {
        if(year%400)
        printf("not leap year");
        else
        printf("leap year");
    }
    return 0;
}