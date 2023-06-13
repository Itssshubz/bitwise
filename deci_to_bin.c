#include<stdio.h>

void deci_to_bin(int n)
{
    printf("deci to bin of %d is ",n);
    for(int i=7;i>=0;i--)
    {
        int mask=1<<i;
        if(n&mask)
        printf("1");
        else
        printf("0");
    }
}
int main()
{
    int num;
    printf("Enter number  : ");
    scanf("%d",&num);

    deci_to_bin(num);
}