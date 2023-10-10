#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
    return 0;
}
a>b?printf("%d",a):printf("%d",b);
printf("%d",a>b?a:b);