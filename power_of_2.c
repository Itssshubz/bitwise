#include<stdio.h>
/*
void power_of_2(int num)
{
    int t= num;
    int flag=0;
    while(t!=1)
    {
        while(t%2!=0)
        {
            flag=1;
            break;
        }
        t=t/2;
    }

    if(flag==0)
    printf("%d is power of 2",num);
    else
    printf("%d is not power of 2",num);

}*/

void power_of_2(int n)
{
    int c=n&(n-1);
    if(c==0)
    printf("%d is power of 2",n);
    else
    printf("%d is not power of 2",n);
}
int main()
{
    int num;
    printf("Enter num");
    scanf("%d",&num);

    power_of_2(num);
  
}