#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter length of the side of a triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    printf("valid triangle");
    else
    printf("not a valid triangle");
    return 0;
}