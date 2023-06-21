#include<stdio.h>

int main()
{
    int n1,n2;
    printf("ENter num1 and num2 : ");
    scanf("%d %d",&n1,&n2);

    if((n1^n2)<0)
    printf("numbers are of opposite sign ");
    else
    printf("numbers are of same sign");
}