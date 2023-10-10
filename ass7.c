#include<stdio.h>
int main()
{
    int x;
    printf("enter three digit numbers");
    scanf("%d",&x);
    printf("%d",x%10*100+x/10);
    return 0;
}