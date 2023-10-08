#include<stdio.h>
int main()
{
    char a,b,c;
    printf("enter three character");
    scanf("%c %c %c",&a,&b,&c);
    printf("%c - %d\n",a,a);
    printf("%c - %d",b,b);
    printf("%c - %d",c,c);
    return 0;
}