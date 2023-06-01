#include<stdio.h>
void even_odd1(int num)
{
    if(num & 1)
    printf("nUmber is odd");
    else
    printf("Number is even");
}

void even_odd2(int num)
{
    if(num % 2==0)
    printf("num is even");
    else
    printf("num is odd");
}

void even_odd3(int num)
{
    int t=num;

    if((t/2*2)==num)
    printf("num is even");
    else
    printf("num is odd");
}

void even_odd4(int num)
{
    int c= (num>>1)<<1;

    if(c==num)
    printf("num is even");
    else
    printf("num is odd");
}
int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);

   // even_odd1(num);
    //even_odd2(num);
    //even_odd3(num);
    even_odd4(num);

}