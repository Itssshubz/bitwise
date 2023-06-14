#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    int k=num&(num-1);

    printf("Num after clearing bit =%d",k);
}