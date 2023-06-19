#include<stdio.h>


void toggle_range(int n, int l  , int r)
{
    printf("num before toggle =%d",n);

    int mask= (1<<(r-l+1))-1;
    int res= n ^ mask;

     printf("num after toggle =%d",res);
}
int main()
{
    int num, l,r;
    printf
    ("Enter number : ");
    scanf("%d",&num);

    printf("Enter range : ");
    scanf("%d %d",&l,&r);

    toggle_range(num,l,r);


}