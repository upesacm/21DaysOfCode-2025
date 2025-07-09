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
        printf("Please make an array with size > 0.\n");
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

    int single_count = 0;
    for(int i = 0; i < n; ) 
    {
        if((i == n-1) || (temp[i] != temp[i+1])) 
        {
            single_count++;
            i++;
        } 
        else 
        {
            i += 2;
        }
    }

    int *singles = (int*)malloc(single_count * sizeof(int));
    if(!singles) 
    {
        printf("No Single elements found.\n");
        free(arr);
        free(temp);
        return 1;
    }

    int idx = 0;
    for(int i = 0; i < n; ) 
    {
        if((i == n-1) || (temp[i] != temp[i+1])) 
        {
            singles[idx++] = temp[i];
            i++;
        } 
        else 
        {
            i += 2;
        }
    }

    printf("Single elements: ");
    for(int i = 0; i < single_count; i++) 
    {
        printf("%d ", singles[i]);
    }
    printf("\n");

    free(arr);
    free(temp);
    free(singles);
    return 0;
}