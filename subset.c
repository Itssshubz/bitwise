//#include<stdio.h>

/*int  xor_subset(int arr[],int n)
{
    if(n==1)
    return arr[0];
    else
    return 0;
}
int main()
{
    int arr[]={9,1
    };

    int n=sizeof(arr)/sizeof(arr[0]);

    printf("xor of all subset=%d ",xor_subset(arr,n));
}*/
#include<stdio.h>

int xor_subset(int arr[], int n) {
    int xor_result = 0;
    
    for (int i = 0; i < n; i++) {
        xor_result ^= arr[i];
    }
    
    return xor_result;
}

int main() {
    int arr[] = {9, 1, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("XOR of all subsets = %d\n", xor_subset(arr, n));
    
    return 0;
}
