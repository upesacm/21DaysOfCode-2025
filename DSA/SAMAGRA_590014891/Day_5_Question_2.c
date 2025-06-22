#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
    int expectedSum = numsSize * (numsSize + 1) / 2;
    int actualSum = 0;
    
    for (int i = 0; i < numsSize; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int nums[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    int missing = missingNumber(nums, size);
    printf("%d\n", missing);

    return 0;
}
