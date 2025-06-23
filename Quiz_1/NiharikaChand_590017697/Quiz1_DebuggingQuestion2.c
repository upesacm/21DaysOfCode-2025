/*
   1) max is not initialized
   2) the original code may fail to correctly find the max value as it is not initialized so by default it has garbage value.
*/

// 3)
#include<stdio.h>
int findMax(int arr[], int n) 
{
    int max = arr[0];
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
    int arr[] = {10, 30, 40, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = findMax(arr, n);
    printf("%d" , result);
}