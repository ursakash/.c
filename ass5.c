#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%2==0 && x%3==0)
    printf("%d is divisible by 2&3",x);
    else
    printf("%d is not divisible by2&3",x);
    return 0;
}
