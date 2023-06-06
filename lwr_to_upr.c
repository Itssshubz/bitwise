#include<stdio.h>

int main()
{
    char ch;
    printf("Enter Lower character :");
    scanf("%c", &ch);

    ch= ch & '_';

    printf("Upper charcter =%c",ch);
}