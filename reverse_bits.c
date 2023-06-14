#include<stdio.h>

void deci_to_bin(int n)
{
 

    for(int i=31;i>=0;i--)
    {
        int mask=1<<i;
        if(n & mask)
        printf("1");
        else
        printf("0");
    }
}

void reverse_bin(int n)
{
    int ans=0;
    for(int i=0;i<32;i++)
    {
        ans=ans << 1;
        ans=ans | (n&1);
        n = n >> 1;
    }

   // 
    deci_to_bin(ans);
}

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
       printf("Binary of %d is ",num);
    deci_to_bin(num);
    printf(" %d after reverse bit is ",num);
    reverse_bin(num);
}