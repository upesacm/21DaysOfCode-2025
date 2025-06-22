#include <stdio.h>
#include <stdbool.h>

int main() {
    int nums[] = {2, 4, 6, 9, 15}; 
    int size = sizeof(nums) / sizeof(nums[0]);
    bool isIncreasing = true;

    for (int i = 1; i < size; i++) {
        if (nums[i] <= nums[i - 1]) {
            isIncreasing = false;
            break;
        }
    }

    if (isIncreasing) {
        printf("Array is strictly increasing.\n");
    } else {
        printf("Array is not strictly increasing.\n");
    }

    return 0;
}
