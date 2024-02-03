#include<stdio.h>
int main()
{
    int l,a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l++)
    if(l%a==0&&l%b==0)
    {
printf("lcm is %d",l);
break;
    }
}