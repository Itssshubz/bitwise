#include<stdio.h>

/*void count_set_bit(int n)
{   int t=n;
    int cnt=0;
    while(n!=0)
    {
        if(n&1)
        cnt++;
        n=n>>1;
    }

    printf("no. of set bit in %d is %d",t,cnt);
}
*/

void count_set_bit(int n)
{
    int t=n;
    int cnt=0;
    while(n!=0)
    {
        n=n&(n-1);
        cnt++;
    }
    printf("no. of set bit in %d is %d",t,cnt);
}
int main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);

    count_set_bit( num);
}