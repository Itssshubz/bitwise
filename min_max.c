#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);

    int min, max;
    int diff=a-b;
/*
    int sign = (diff >> 31)&1;

    min = b + sign * (a-b);
    max= a - sign * (a-b);
    */
   min = b ^ ((a^b) & -(a<b));
   max = a ^((a^b) & -(a<b));

    printf("min=%d max=%d ",min,max);
}