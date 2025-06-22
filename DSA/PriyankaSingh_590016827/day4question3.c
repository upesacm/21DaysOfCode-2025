#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) 
{
    int count = 0;
    
    // Counting how many elements need to be kept
    for (int i = 0; i < numsSize; i++) 
    {
        if (nums[i] != val) 
        {
            count++;
        }
    }

    // Performing the removal
    int pos = 0;
    for (int i = 0; i < numsSize; i++) 
    
    {
        if (nums[i] != val) 
        {
            nums[pos++] = nums[i];
        }
    }
    
    return count;
}

int main() 
{
    int size, val;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    if (size <= 0) 
    {
        printf("Invalid size!\n");
        return 1;
    }
    
    int* arr = (int*)malloc(size * sizeof(int));
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value to remove: ");
    scanf("%d", &val);
    
    int newSize = removeElement(arr, size, val);
    
    printf("Modified array: ");
    for (int i = 0; i < newSize; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\nNew length: %d\n", newSize);
    
    free(arr);
    return 0;
}