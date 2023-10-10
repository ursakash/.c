#include<stdio.h>
int main()
{
    int x,s;
    printf("enter a number");
    scanf("%d",&x);
    s=x/10*10;
    printf("lost digit of a number is %d %d",x,s);
    return 0;

}