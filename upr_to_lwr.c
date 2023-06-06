#include<stdio.h>

int main()
{
    char ch;
    printf("Enter Upper charater : ");
    scanf("%c",&ch);

    ch=ch | ' ';

    printf("Lower charcater = %c",ch);
}