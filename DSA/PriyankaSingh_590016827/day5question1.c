#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void* a, const void* b) 
{
    return (*(int*)a - *(int*)b);
}

int singleNumber(int* nums, int numsSize) 
{
    qsort(nums, numsSize, sizeof(int), compare);

    for (int i = 0; i < numsSize - 1; i += 2) 
    {
        if (nums[i] != nums[i + 1]) 
        {
            return nums[i];
        }
    }
    
    return nums[numsSize - 1];  // Last element is unique
}

int main() 
{
    int size;
    
    printf("Enter array size (odd number): ");
    scanf("%d", &size);
    
    if (size <= 0 || size % 2 == 0) 
    {
        printf("Invalid size! Must be odd and positive.\n");
        return 1;
    }
    
    int* arr = (int*)malloc(size * sizeof(int));
    printf("Enter %d elements (all pairs except one): ", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    int unique = singleNumber(arr, size);
    printf("Unique element found: %d\n", unique);
    
    free(arr);
    return 0;
}