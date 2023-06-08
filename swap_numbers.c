#include<stdio.h>

int main()
{
    int a,b;
    printf("enter a and b");
    scanf("%d %d",&a,&b);

   /* a=a^b;
    b=a^b;
    a=a^b;
    
   a=a+b;
   b=a-b;
   a=a-b;
   
  a=a*b;
  b=a/b;
  a=a/b;*/

  a=(a*b)/(b=a);
    printf("after swapping \n a=%d b=%d",a,b);
}