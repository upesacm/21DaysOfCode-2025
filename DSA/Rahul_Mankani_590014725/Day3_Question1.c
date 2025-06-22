#include <stdio.h>

int FreqSum(int arr[], int size, int k) 
{
    int freq[1001] = {0};//taking max array size 1000
    for(int i = 0; i < size; i++) 
    {
        freq[arr[i]]++;
    }
    int sum = 0;
    for(int i = 0; i <= 1000; i++) 
    {
        if(freq[i] == k) 
        {
            sum += i;
        }
    }
    return sum;
}
int main() 
{
    int size, k;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    int result = FreqSum(arr, size, k);
    printf("Sum of elements appearing exactly %d times: %d\n", k, result);
    return 0;
}
