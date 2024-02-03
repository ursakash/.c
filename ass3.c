#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    while(n)
    {
        printf("%d",n);
        n--;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",n+1-i);
        i++;

    }
    return 0;
}