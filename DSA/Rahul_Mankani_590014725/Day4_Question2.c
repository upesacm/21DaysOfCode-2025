#include <stdio.h>

void rotate(int arr[], int size, int k) 
{
    k = k % size;
    int temp[size];
    for(int i = 0; i < size; i++) 
    {
        temp[(i + k) % size] = arr[i];
    }
    for(int i = 0; i < size; i++) 
    {
        arr[i] = temp[i];
    }
}

int main() 
{
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if(n <= 0) 
    {
        printf("Please enter a valid size (greater than 0)\n");
        return 1;
    }
    printf("Enter number of steps to rotate right: ");
    scanf("%d", &k);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    rotate(arr, n, k);
    printf("Rotated array: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
