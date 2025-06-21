
#include <stdio.h>
#include <stdbool.h>

bool isStrictlyIncreasing(int* nums, int numsSize) {
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] <= nums[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    if (isStrictlyIncreasing(nums, size)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
