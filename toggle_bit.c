#include<stdio.h>
int toggle(int num, int pos)
{
    int mask=1<<(pos-1);

    return num ^ mask;
}
int main()
{
    int num,pos;
    printf("enter number");
    scanf("%d",&num);
    printf("Enter pos number");
    scanf("%d",&pos);

    int j=toggle(num, pos);

    printf("Num after toggle bit =%d",j);
}