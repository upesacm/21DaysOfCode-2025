#include <stdio.h>
#include <stdbool.h>

bool isStrictlyIncreasing(int* nums, int numsSize) {
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] <= nums[i - 1]) return false;
    }
    return true;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {1, 2, 2, 3};

    printf("%s\n", isStrictlyIncreasing(nums1, 4) ? "true" : "false");
    printf("%s\n", isStrictlyIncreasing(nums2, 4) ? "true" : "false");
    return 0;
}