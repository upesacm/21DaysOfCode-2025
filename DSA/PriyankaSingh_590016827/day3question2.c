#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int containsDuplicate(int* nums, int numsSize) {
    // Sort the array first
    qsort(nums, numsSize, sizeof(int), compare);
    
    // Check adjacent elements
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return 1; // duplicate found
        }
    }
    return 0; // no duplicates
}

int main() {
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int* nums = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    if (containsDuplicate(nums, n)) {
        printf("The array contains duplicates.\n");
    } else {
        printf("The array does not contain duplicates.\n");
    }
    
    free(nums);
    return 0;
}