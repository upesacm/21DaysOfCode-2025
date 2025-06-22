#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
    int expected_sum = numsSize * (numsSize + 1) / 2;
    int actual_sum = 0;

    for (int i = 0; i < numsSize; i++) {
        actual_sum += nums[i];
    }

    return expected_sum - actual_sum;
}

int main() {
    int nums[] = {3, 0, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("The missing number is: %d\n", missingNumber(nums, size));
    return 0;
}
