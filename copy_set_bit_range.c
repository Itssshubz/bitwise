#include<stdio.h>


void copy_set_bits(int n1, int n2, int l, int r)
{
    printf("num before n1=%d and n2=%d\n",n1,n2);
    int masklength=(1<<(r-l+1)) -1;
    int mask=(masklength << (l-1)) & n1;

    n2=n2 | mask;

    printf("num after n1=%d and n2=%d\n",n1,n2);
}
int main()
{
    int n1,n2,l,r;
    printf("Enter number : ");
    scanf("%d %d",&n1,&n2);

    printf("enter left and right range : ");
    scanf("%d %d",&l,&r);

    copy_set_bits(n1,n2,l,r);
}