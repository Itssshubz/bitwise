#include<stdio.h>


/*
int min_ways(int n, int cnt)
{
    if(n==1)
    return cnt;
    else if(n%2==0)
    return min_ways(n/2,cnt+1);
    else
    return ((min_ways(n-1,cnt+1)));
}*/
int min_ways(int n)
{
    int cnt=0;
    while(n > 1)
    {
    cnt++;
    if((n&1)==0)
    {
    n=n>>1;
    }
    else if((n&1==3) || (n==3))
    {
        n=n-1;
    }
    else if(n&3==3)
    {
        n=n+1;
    }
    }
    return cnt;
}
int main()
{
    int num,steps;
    printf("enter number : ");
    scanf("%d",&num);

    printf("No. of steps =%d ",min_ways(num));
}