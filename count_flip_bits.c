#include<stdio.h>


/*void count_flip_bits(int a, int b)
{
    int n=a^b;
    int cnt=0;
    while(n)
    {
        n=n&(n-1);
        cnt++;
    }
    printf("no. of bits to flip %d to %d is %d",a,b,cnt);

}*/
void count_flip_bits(int a, int b)
{
    int cnt=0;

    for(int i=31;i>=0;i--)
    {
        if(((a>>i)&1) != ((b>>i)&1) )
        cnt++;
    }
     printf("no. of bits to flip %d to %d is %d",a,b,cnt);


}
int main()
{
    int a,b;
    printf("enter a and  b : ");
    scanf("%d %d",&a,&b);

    count_flip_bits(a,b);
}