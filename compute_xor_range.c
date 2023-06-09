#include<stdio.h>


int xor_(int n)
{
    if(n%4==0)
    return n;               
    if(n%4==1)
    return 1;
    if(n%4==2)
    return n+1;
    if(n%4==3);
    return 0;
}

int xor_range(int num1,int num2)
{
    return (xor_(num1-1)^xor_(num2));
}
int main()
{
    int n1,n2;;
    printf("ENter range :");
    scanf("%d %d",&n1,&n2);

    int v= xor_range(n1,n2);
    printf("xor op from %d to %d is %d",n1,n2,v);
}