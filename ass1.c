#include<stdio.h>
int main()
{
    int x,s;
    printf("enter a number");
    scanf("%d",&x);
    s=x/100+x/10%10+x%10;
    printf("sum of digit is %d",x);
    return 0;
}