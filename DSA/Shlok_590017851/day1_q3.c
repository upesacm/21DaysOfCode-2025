#include <stdio.h>
int sumOfArray(int arr[], int n) 
{
    int sum = 0;
    for(int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int total = sumOfArray(arr, n);
    printf("Sum of array elements: %d\n", total);
    return 0;
}
