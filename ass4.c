#include<stdio.h>
int main()
{
    char x;
    printf("enter alphabet");
    scanf("%c",&x);
    if(x>='a'&&x<='z')
    printf("lowercase alphabet");
    else if(x>='A'&&x<='Z')
    printf("uppercase alphabet");
    else
    printf("not an alphabet");
    return 0;
}
