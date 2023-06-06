#include<stdio.h>
/*
int main()
{
    int arr[]={1,2,3,4,5,6,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    
    
    for(int i=0;i<n;i++)
    {
       int  cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            cnt++;
        }
         if(cnt==0)
        {
            printf("%d ",arr[i]);
        }
    }
}*/

int non_repeat(int arr[],int n)
{
    //int n=sizeof(arr)/sizeof(arr[0]);

    int freq[256]={0};

    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    printf("Non repititv charater in array :\n");
     for(int i=0;i<n;i++)
    {
        if(freq[arr[i]]==1)
        {
        printf("%d ",arr[i]);
        freq[arr[i]]=-1;
        }
    }

    return 0;


}

int main()
{
    int arr[8];
    int n=8;

    printf("Enter elements :");

    for(int i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array is :\n");

    for(int i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }

   non_repeat(arr,n);



}