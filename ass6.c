#include<stdio.h>
int main()
{
    int i,p,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1,p=1;i<=n;i++)
    {
        p=p*i;

    }
    printf("factorial is %d",p);
    return 0;
}