#include<stdio.h>
int main()
{
    float sp,cp,p,l;
    printf("enter selling price and cost price");
    scanf("%f %f",&sp,&cp);
    if(sp-cp>=0)
    {
        p=(sp-cp)/cp*100;
        printf("%f",p);
    }
    else
    {
    l=(cp-sp)/cp*100;
    printf("%f",l);
    }
    return 0;

}