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
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n <= 0) 
    {
        printf("Invalid size.\n");
        return 1;
    }

    int *arr = (int*)malloc(n * sizeof(int));
    int *temp = (int*)malloc(n * sizeof(int));
    if(!arr || !temp) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        temp[i] = arr[i];
    }

    quickSort(temp, 0, n-1);

    int dup_count = 0;
    for(int i = 0; i < n-1; ) 
    {
        if(temp[i] == temp[i+1]) 
        {
            dup_count++;
            int val = temp[i];
            while(i < n && temp[i] == val) i++;
        } 
        else 
        {
            i++;
        }
    }

    int *dups = (int*)malloc(dup_count * sizeof(int));
    if(!dups) 
    {
        printf("Memory allocation failed.\n");
        free(arr);
        free(temp);
        return 1;
    }

    int idx = 0;
    for(int i = 0; i < n-1; ) 
    {
        if(temp[i] == temp[i+1]) 
        {
            dups[idx++] = temp[i];
            int val = temp[i];
            while(i < n && temp[i] == val) i++;
        } 
        else 
        {
            i++;
        }
    }

    if(dup_count == 0) 
    {
        printf("No duplicates found.\n");
    } 
    else 
    {
        printf("Duplicate elements: ");
        for(int i = 0; i < dup_count; i++) 
        {
            printf("%d ", dups[i]);
        }
        printf("\n");
    }

    free(arr);
    free(temp);
    free(dups);
    return 0;
}