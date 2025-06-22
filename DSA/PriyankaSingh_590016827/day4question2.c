#include <stdio.h>
#include <stdlib.h>

// Function to rotate array to the right by k steps
void rotate(int* nums, int numsSize, int k) 
{
    // Handling cases where k is larger than array size
    k = k % numsSize;
    if (k == 0) return;  // No rotation needed
    
    // Creating a temporary array to store the last k elements
    int* temp = (int*)malloc(k * sizeof(int));
    
    // Storing the last k elements
    for (int i = 0; i < k; i++) 
    {
        temp[i] = nums[numsSize - k + i];
    }
    
    // Shifting the remaining elements to the right
    for (int i = numsSize - 1; i >= k; i--) 
    {
        nums[i] = nums[i - k];
    }
    
    // Copying the temporary array to the beginning
    for (int i = 0; i < k; i++) 
    {
        nums[i] = temp[i];
    }
    
    free(temp);
}

int main() 
{
    int n, k;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Invalid array size!\n");
        return 1;
    }
    
    int* nums = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter the number of steps to rotate: ");
    scanf("%d", &k);
    
    // Handling negative k (rotate left)
    if (k < 0) 
    {
        printf("Negative rotation steps not supported. Using absolute value.\n");
        k = -k;
    }
    
    rotate(nums, n, k);
    
    printf("Rotated array: [");
    for (int i = 0; i < n; i++) 
    {
        printf("%d", nums[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
    
    free(nums);
    return 0;
}