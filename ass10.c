#include <stdio.h>
int main()

{
    int m;
    printf("enter maths");
    scanf("%d", &m);
    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        printf("31 days");
    else if (m==4 || m==6 || m==9 || m==11)
        printf("30 days");
    else
        printf("28 or 29 days");
    return 0;
}