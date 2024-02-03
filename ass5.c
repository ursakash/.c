#include<stdio.h>
int main()
{
    int i,s,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    {
        s=s+i*i*i;

    }
    printf("sum is %d",s);
    return 0;
}