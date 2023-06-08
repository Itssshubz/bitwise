#include<stdio.h>
int occurence_once(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^arr[i];
    }
    return res;
}
int main()
{
    int arr[]={1,2,3,4,5,4,3,2,1};

    int n=sizeof(arr)/sizeof(arr[0]);

    int res=occurence_once(arr,n);
    if(res!=0)
    printf("Element once occure is %d",res);
    else
    printf("no element is single");
}