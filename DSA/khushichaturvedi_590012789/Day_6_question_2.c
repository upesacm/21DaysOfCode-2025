#include <stdio.h>
#include <stdbool.h>
bool isStrictlyIncreasing(int* nums, int size) {
    for (int i = 1; i < size; i++) {
        if (nums[i] <= nums[i - 1]) {
            return false; 
        }
    }
    return true; 
}
int main() {
    int nums[] = {1, 3, 5, 7, 9}; 
    int size = sizeof(nums) / sizeof(nums[0]);
    if (isStrictlyIncreasing(nums, size)) {
        printf("The array is strictly increasing.\n");
    } else {
        printf("The array is NOT strictly increasing.\n");
    }
    return 0;
}
