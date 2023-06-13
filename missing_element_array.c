#include<stdio.h>


void missing_array(int arr[],int n)
{
    int x=arr[0];
    for(int i=0;i<n;i++)
    {
        x=x^arr[i];
    }

    printf("Miissing element in array is %d",x);
}
int main()
{
    int arr[]={1,2,3,4,6,7,8,9};
    int n= sizeof  (arr)/sizeof(arr[0]);

    missing_array(arr,n);


}