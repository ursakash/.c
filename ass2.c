#include<stdio.h>
int main()
{
    int i,n,s;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
    {
        s=s+2*i;
    }
    printf("sum is %d",s);
    return 0;
}