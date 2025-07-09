#include <stdio.h>
#include <stdbool.h>

bool is_sorted(int arr[], int size) 
{
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < arr[i - 1]) 
        {
            return false;
        }
    }
    return true;
}

void merge_sort(int arr1[], int size1, int arr2[], int size2, int result[]) 
{
    int i = 0, j = 0, k = 0;
    
    while (i < size1 && j < size2) 
    {
        if (arr1[i] < arr2[j]) 
        {
            result[k++] = arr1[i++];
        } 
        else 
        {
            result[k++] = arr2[j++];
        }
    }
    
    while (i < size1) 
    {
        result[k++] = arr1[i++];
    }

    while (j < size2) 
    {
        result[k++] = arr2[j++];
    }
}

int main() 
{
    int size1, size2;
    
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    if (size1 <= 0) 
    {
        printf("Invalid size for the first array.\n");
        return 0;
    }
    
    int arr1[size1];
    printf("Enter %d elements for the first array: ", size1);
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    
    if (!is_sorted(arr1, size1)) 
    {
        printf("The first array is not sorted in ascending order.\n");
        return 0;
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    if (size2 <= 0) 
    {
        printf("Invalid size for the second array.\n");
        return 0;
    }
    
    int arr2[size2];
    printf("Enter %d elements for the second array: ", size2);
    for (int i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    
    if (!is_sorted(arr2, size2)) {
        printf("The second array is not sorted in ascending order.\n");
        return 0;
    }
    
    int result[size1 + size2];
    merge_sort(arr1, size1, arr2, size2, result);
    
    printf("Merged sorted array: ");
    for (int i = 0; i < size1 + size2; i++) 
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    return 0;
}