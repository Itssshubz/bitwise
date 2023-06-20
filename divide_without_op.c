#include<stdio.h>

int main()
{
    int dividend=34, divisor=5, quotient=0, remainder;
/*
    printf("ENter divident : ");
    scanf("%d",&dividend);

    printf("enter divisior : ");
    scanf("%d",divisor);
    */

    while(dividend>=divisor)
    {
        dividend=dividend-divisor;
        quotient++;

    }
    remainder=dividend;
    printf("After division remainder=%d quotient=%d",remainder,quotient);
}