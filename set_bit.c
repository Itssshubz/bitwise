#include<stdio.h>

int set_bit(int num, int pos)
{
    int mask=1<<(pos-1);
    return (num | mask);
}

int main()
{
    int num, pos;

    printf("Enter number ");
    scanf("%d",&num);

    printf("Enter bit position to be set");
    scanf("%d",&pos);

    int n =set_bit(num, pos);

    printf("Number after setting bit =%d",n);
}