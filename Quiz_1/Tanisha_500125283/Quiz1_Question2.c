#include<stdio.h>
int findMax(int arr[], int n) 
{
    int max=arr[0];
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
       {
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={5,3,7,2,8};
    int n = sizeof(arr) / sizeof(arr[0]);  
    int result = findMax(arr, n);
    printf("Maximum value: %d\n", result);
    findMax(arr, n);
}

// bug was that max was not initialized
// it can produce garbage value(incorrect behaviour)