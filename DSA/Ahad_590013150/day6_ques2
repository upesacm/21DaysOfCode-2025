#include <stdio.h>
#include <stdbool.h>

bool isStrictlyIncreasing(int* nums, int size) {
    for (int i = 1; i < size; i++) {
        if (nums[i] <= nums[i - 1])
            return false;
    }
    return true;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Strictly Increasing? %s\n", isStrictlyIncreasing(nums, size) ? "true" : "false");
    return 0;
}
