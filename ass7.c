#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    while(n)
    {
        printf("%d",2*n);
        n--;
    }
    return 0;
}