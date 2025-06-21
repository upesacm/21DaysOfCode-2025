#include <stdio.h>

int longestConsecutiveIncreasingSubarray(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int maxLen = 1;
    int currentLen = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1] + 1) {
            currentLen++;
            if (currentLen > maxLen)
                maxLen = currentLen;
        } else {
            currentLen = 1;
        }
    }

    return maxLen;
}

int main() {
    int nums[] = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = longestConsecutiveIncreasingSubarray(nums, size);
    printf("Longest consecutive increasing subarray length: %d\n", result);

    return 0;
}
