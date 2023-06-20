#include<stdio.h>

int swap_bits(int num, int i,int j)
{
    int a= num>>(i-1)&1;
    int b= num >> (j-1)&1;

    int c =a^b;

    num=num ^ (c<<(i-1));
    num=num ^ (c<<(j-1));
    return num;
}
int main()
{
    int num ,n1,n2;
    printf("Enter number :");
    scanf("%d",&num);

    printf("Enter bit position to be swapped :");
    scanf("%d %d",&n1,&n2);

    int t=swap_bits(num,n1,n2);

    printf("%d after swapping bits is %d",num,t);
}