#include<stdio.h>

void char_pos(char ch)
{
    char c=ch;
    ch=ch & 31;

    printf("%c position is  %d ",c,ch);
}
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    char_pos(ch);
}