#include<stdio.h>

/*
int power_of_4(int n)
{
    int t =n;
    int flg=0;

    while(t!=1)
    {
        while(t%4!=0)
        {
            flg =1;
            return  flg;
            break;
        }
        t=t/4;
    }
    return flg;
}

int power_of_4(int n)
{
    int k= !(n & (n-1));

    int mask=!(n & 0xAAAAAAAA);

    return (k && mask);
}
*/

int power_of_4(int n)
{
    return (!(n &(n-1)) && (n%3==1));
}
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);

    int i=power_of_4(num);

    if(i)
    printf("%d is power of 4",num);
    else
    printf("%d is not power of 4",num);
}