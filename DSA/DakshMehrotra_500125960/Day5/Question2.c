#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) 
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) 
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++) 
    {
        if(arr[j] < pivot) 
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high) 
{
    if(low < high) 
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main() 
{
    int n, size;
    printf("Enter n (maximum number in sequence): ");
    scanf("%d", &n);

    printf("Enter size of array: ");
    scanf("%d", &size);

    if(size <= 0 || n < 0) 
    {
        printf("Invalid input. Make sure both Size and n are positive integers.\n");
        return 1;
    }

    int *arr = (int*)malloc(size * sizeof(int));
    if(!arr) 
    {
        printf("Empty Array. Memory allocation failed.\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, size-1);

    int *missing = (int*)malloc((n+1) * sizeof(int));
    int miss_idx = 0, arr_idx = 0;

    for(int i = 0; i <= n; i++) 
    {
        if(arr_idx < size && arr[arr_idx] == i) 
        {
            arr_idx++;
        } 
        else 
        {
            missing[miss_idx++] = i;
        }
    }

    printf("Missing number(s): ");
    for(int i = 0; i < miss_idx; i++) 
    {
        printf("%d ", missing[i]);
    }
    printf("\n");

    free(arr);
    free(missing);
    return 0;
}