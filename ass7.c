#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x>0)
    printf("positive");
    else if(x<0)

    printf("negative");
    else
    printf("zero");
    return 0;
}