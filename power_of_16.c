#include<stdio.h>

/*int power_of_16(int num)
{
    int t=num;

    int flg=0;
    while(t!=1)
    {
        while(t%16!=0)
        {
            flg=1;
            return flg;
            break;
        }
        t=t/16;
    }
    return flg;
}
int power_of_16(int n)
{
    int t=!(n & (n-1));

    int mask=!(n & 0xEEEEEEEE);

    return t && mask;
}
*/

int power_of_16(int n)
{
    return (!(n &(n-1)) && (n%15==1));
}


int main()
{
    int num;
    printf("ENter number");
    scanf("%d",&num);

   int t= power_of_16(num);
   if(t==1)
   printf("%d is power of 16",num);
   else
   printf("%d is not power od 16",num);
}