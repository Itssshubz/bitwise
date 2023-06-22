#include<stdio.h>


int add_1(int num)
{
    int leftshift=1;

    while(num & leftshift)
    {
        num=num ^ leftshift;

        leftshift=leftshift<<1;

    }
    num=num^leftshift;
    return num;

}
int add_one(int num)
{
    return(-(~num));
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

   // int v= add_1(num);
    int v= add_one(num);
    printf("%d after adding is %d",num,v);
}