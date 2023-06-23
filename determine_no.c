#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter number : ");
    scanf("%d %d",&a,&b);

  //  if(a^b)
  if((a&(~b))!=0)
    printf("%d and %d are not same",a,b);
    else
     printf("%d and %d are  same",a,b);
}