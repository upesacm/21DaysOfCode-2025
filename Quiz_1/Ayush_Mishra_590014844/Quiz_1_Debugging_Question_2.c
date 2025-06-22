#include<stdio.h>
int findMax(int arr[],int n) 
{
    if (n == 0){
        printf("Array is empty, returning minimum integer value\n");
        return -2147483648; //return INT_MIN if needed
    }
    int max = arr[0];  //initialize with the first element
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

int main() 
{
    int arr[]={12, 45, 7, 89, 23, 56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=findMax(arr, n);
    printf("maximum element is:%d\n",result);
    
    return 0;
}
