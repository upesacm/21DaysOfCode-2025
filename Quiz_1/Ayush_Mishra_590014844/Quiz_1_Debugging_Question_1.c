#include<stdio.h>
int maxsubarraysum(int num[],int n) 
{
    int maxsum=num[0];
    int currentsum=num[0];

    for (int i=1;i<n;i++) 
    {
        if (num[i]>currentsum+num[i])
            currentsum=num[i];
        else
            currentsum=currentsum+num[i];

        if (currentsum>maxsum)
            maxsum=currentsum;
    }
    return maxsum;
}

int main() 
{
    int arr[]={-3, -2, -1, -4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=maxsubarraysum(arr, n);
    printf("maximum subarray sum is:%d\n",result);

    return 0;
}
