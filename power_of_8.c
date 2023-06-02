#include<stdio.h>
/*void power_of_8(int n)
{
    int t=n;
    int flag=0;
    while(t!=1)
    {
        if(t%2 !=0)
        {
            flag=1;
            break;
        }
        t=t/8;
    }

    if(flag==0)
    printf("%d is power of 8",n);
    else
    printf("%d is not power of 8",n);
}

int  power_of_8(int n)
{

    int t=!(n &(n-1));

    int k=!(n & 0xB6DB6DB6);
    return (t && k);
   
}
*/
int power_of_8(int n)
{
    return (!(n &(n-1) ) && (n %7==1) );
}
int main ()
{
    int num;
    printf("Enter number ");
    scanf("%d",&num);

   int v= power_of_8(num);
    if(v)
     printf("%d is  power of 8",num);
    else
    printf("%d is not power of 8",num);
}