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
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d distinct numbers from 0 to %d (one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int missing = missingNumber(nums, n);
    printf("The missing number is: %d\n", missing);

    return 0;