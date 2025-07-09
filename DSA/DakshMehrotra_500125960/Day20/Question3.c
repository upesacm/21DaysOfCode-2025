#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right) 
{
    int pivot = arr[right];
    int i = left - 1;
    
    for (int j = left; j < right; j++) 
    {
        if (arr[j] >= pivot) 
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[right]);
    return i + 1;
}

int quickSelect(int arr[], int left, int right, int k) 
{
    if (left == right) 
    {
        return arr[left];
    }
    
    int pivotIndex = partition(arr, left, right);
    
    if (pivotIndex == k - 1) 
    {
        return arr[pivotIndex];
    } 
    else if (pivotIndex < k - 1) 
    {
        return quickSelect(arr, pivotIndex + 1, right, k);
    } 
    else 
    {
        return quickSelect(arr, left, pivotIndex - 1, k);
    }
}

int largest(int arr[], int size, int k) 
{
    if (k < 1 || k > size) 
    {
        printf("Invalid value of K.\n");
        return -1;
    }
    return quickSelect(arr, 0, size - 1, k);
}

int main() 
{
    int size, k;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0) 
    {
        printf("Invalid size for the array.\n");
        return 0;
    }
    
    int arr[size];
    printf("Enter %d elements for the array: ", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value of K: ");
    scanf("%d", &k);
    
    int kthLargest = largest(arr, size, k);
    if (kthLargest != -1) 
    {
        printf("The %dth largest element is: %d\n", k, kthLargest);
    }
    
    return 0;
}