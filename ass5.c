#include<stdio.h>
int main()
{
    float cp,sp,profit;
    printf("enter cost price and selling of 12 bananas");
    scanf("%f%f",&cp,&sp);
    profit=(sp-cp)*25/12;
    printf("profit is %f",profit);
    return 0;
}