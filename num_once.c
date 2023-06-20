#include<stdio.h>

/*
void num_once(int arr[],int n)
{
    int i,j,cnt;

    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            cnt++;
            }
        }
        if(cnt==1)
        printf("%d ",arr[i]);

    }
}

void num_once(int arr[],int num)
{
    int i;
    int res=0;
    for(i=0;i<num;i++)
    {
        res=res ^arr[i];
    }
    printf("res=%d",res);
}
*/

int num_once(int arr[],int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("after sort:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(i=0;i<n;i+=3)
    {
        if(arr[i]!=arr[i+1])
        return arr[i];
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,1,2,3,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    int b=num_once(arr,n);
    if(b!=-1)
    {
        printf("/n %d is occoured once",b);
    }
    else
    printf("no element occour once");
}