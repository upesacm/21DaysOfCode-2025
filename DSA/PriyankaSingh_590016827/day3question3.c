#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function to find the second largest unique element
int findSecondLargest(int* nums, int numsSize) {
    if (numsSize < 2) {
        return -1; // Not enough elements for a second largest
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > first) {
            second = first;
            first = nums[i];
        } 
        else if (nums[i] > second && nums[i] != first) {
            second = nums[i];
        }
    }

    // If second is still INT_MIN, it means all elements were same or only one unique element
    return (second != INT_MIN) ? second : -1;
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
    
    int result = findSecondLargest(nums, n);
    
    if (result != -1) {
        printf("The second largest unique element is: %d\n", result);
    } else {
        printf("There is no second largest unique element.\n");
    }
    
    free(nums);
    return 0;
}