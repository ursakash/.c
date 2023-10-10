#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x>=100 && x<=999)
    {
        printf("three digit number");

    }
    else
    {
        printf("not three digit number");
    }
    return 0;
}