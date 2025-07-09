#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortColors(int arr[], int n) 
{
    int low = 0, mid = 0, high = n - 1;
    
    while (mid <= high) 
    {
        switch(arr[mid]) 
        {
            case 0:
                swap(&arr[low], &arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&arr[mid], &arr[high]);
                high--;
                break;
        }
    }
}

int main() 
{
    int n;
    
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid size. Size must be a positive integer.\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d integers (only 0, 1, or 2):\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &arr[i]) != 1 || arr[i] < 0 || arr[i] > 2) 
        {
            printf("Invalid input. Only 0, 1, or 2 allowed.\n");
            return 1;
        }
    }
    
    sortColors(arr, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}