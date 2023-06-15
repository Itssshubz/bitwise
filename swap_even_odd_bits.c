#include<stdio.h>


int swap_even_odd(int n)
{
    int even= n & 0xAAAAAAAA;
    int odd = n & 0x55555555;

    even = even >> 1;
    odd = odd << 1;

    int res= even | odd;

    return res;
    
}
int main()
{
    int num;
    printf("ENter number :");
    scanf("%d",&num);

   int v= swap_even_odd(num);

    printf("%d after swapping even-odd bits is %d",num,v);
}