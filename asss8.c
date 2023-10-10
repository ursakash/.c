#include <stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d", &x);
    if (x >='a'&& x <='z')
        printf("lowercase alaphabet");
    else 
    if(x >='A'&&x<='Z')
        printf("uppercase alaphabet");
    else 
    if (x >= '0' && x <= '0')
        printf("digit");
    else 
        printf("special charecter");
        return 0;
}
