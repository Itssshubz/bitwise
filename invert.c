#include<stdio.h>

void invert(char ch)
{
    ch= ch ^ ' ';

    printf("char after invert =%c",ch);
}
int main()
{
    char ch;

    printf("Enter character  :");
    scanf("%c",&ch);

    invert(ch);
}