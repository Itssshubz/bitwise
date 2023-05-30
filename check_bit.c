#include<stdio.h>


void check_bit (int num, int pos )
{
    int mask= 1<<(pos-1);

    if(num & mask)
    printf("Bit is set");
    else
    printf("Bit is not set");

}
int main()
{
    int num , pos;

    printf("Enter number :");
    scanf("%d",&num);

    printf("\n enter bit no. to check :");
    scanf("%d",&pos);

    check_bit(num,pos);
}