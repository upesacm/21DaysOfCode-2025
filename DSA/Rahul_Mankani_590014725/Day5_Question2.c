#include <stdio.h>

int Missing(int arr[], int size) 
{
    int exp_sum = (size * (size + 1)) / 2; 
    int act_sum = 0;    
    for (int i = 0; i < size; i++) 
    {
        act_sum += arr[i];
    }
    return exp_sum - act_sum;
}
int main() 
{
    int size;
    printf("Enter the size of the array (n, where array contains numbers from 0 to n except one): ");
    scanf("%d", &size);
    if (size < 0) 
    {
        printf("Error: Size cannot be negative.\n");
        return 1;
    }
    int arr[size];
    printf("Enter %d distinct integers from 0 to %d (one number missing):\n", size, size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int missing = Missing(arr, size);
    printf("The missing number is: %d\n", missing);
    return 0;
}
