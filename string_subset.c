
#include<stdio.h>

int check_substring(char*str,char*substr)
{
    int l1,l2,i,j;
    

    for(i=0;str[i]!='\0';i++)
    {
        l1++;
    }
    for(i=0;substr[i]!='\0';i++)
    {
        l2++;
    }

    for(i=0;i<l1-l2;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(str[i+j]!=substr[j])
            break;
        }
       if(j==l2)
       return i;
    }
    return -1;
}

int main()
{
    char str[30], substr[10];
    printf("Enter string : ");
    //scanf("%[^\n]s",str);
    gets(str);
    printf("\n Enter substring :");
    gets(substr);
   // scanf("%[^\n]s",substr);
   int (*fptr)(char*,char*);
   fptr=check_substring;

   int c= check_substring(str,substr);

   if(c!=-1)
   {
     printf("substring is  present at %d",c);
   
   }
   else
    printf("substring is not present ");
   
}