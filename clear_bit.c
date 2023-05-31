#include<stdio.h>

int clear_bit(int num, int pos)
{
    int mask=1<<pos-1;
    mask=~mask;
    return(num & mask);
}
int main ()
{
    int num ,pos;
    printf("Enetr number ");
    scanf("%d",&num);

    printf("Enetr bit no. to be clear");
    scanf("%d",&pos);

    int k= clear_bit(num, pos);
    printf("Num after clear bit =%d",k);
}