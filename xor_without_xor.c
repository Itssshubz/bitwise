#include<stdio.h>

int xor(int n1,int n2)
{
    /*int res=0;

    for(int i=31;i>=0;i--)
    {
        int a= n1 & (1 << i);
        int b = n2 & (1<< i);

        int x=(a & b) ? 0 : (a | b);

        res = res << 1;
        res = res | x;
    }
    return res;*/
    int res = (n1 & (~n2)) | ((~n1) & n2);
    return res;
}

int main()
{
    int n1,n2;
    printf("Enter num 1 and num 2 : ");
    scanf("%d %d",&n1,&n2);

    int c= xor(n1,n2);

    printf("%d ^ %d is %d",n1,n2,c);
}