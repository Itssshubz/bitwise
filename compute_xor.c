#include<stdio.h>

int xor_n(int n)
{
    if(n%4==0)
    return n;
    if( n%4==1)
    return 1;
    if(n%4==2)
    return n+1;
    if(n%4==4);
    return 0;
}

int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    int k =xor_n(num);

    printf("all elements xor =%d",k);
}