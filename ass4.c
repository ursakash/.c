#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    printf("unit digit is %d",x%10);
    return 0;
}