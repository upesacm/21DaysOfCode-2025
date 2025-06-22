#include <stdio.h>

// Function to replace negative numbers with zero
void replaceNegativesWithZero(int nums[], int n) {
    for(int i = 0; i < n; i++) {
        if(nums[i] < 0) {
            nums[i] = 0;
        }
    }
}

void printArray(int nums[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {4, -3, 7, -1, 0, 5, -6};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    printf("Original array: ");
    printArray(nums, n);

    replaceNegativesWithZero(nums, n);

    printf("Modified array: ");
    printArray(nums, n);

    return 0;
}
