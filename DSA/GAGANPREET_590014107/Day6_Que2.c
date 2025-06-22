#include <stdio.h>

int isStrictlyIncreasing(int nums[], int size) {
    for (int i = 1; i < size; i++) {
        if (nums[i] <= nums[i - 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int nums[] = {1, 3, 5, 8, 10};
    int size = sizeof(nums) / sizeof(nums[0]);

    if (isStrictlyIncreasing(nums, size)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
