#include<stdio.h>
int main()
{
    int x,s;
    printf("enter a number");
    scanf("%d",&x);
    s=x*10+9;
    printf("last digit is %d %d",x,s);
    return 0;
}