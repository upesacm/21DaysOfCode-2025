#include <stdio.h>
int findMissingNumber(int nums[], int n) {
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for (int i = 0; i < n; i++) {
        actual_sum += nums[i];
    }
    return expected_sum - actual_sum;
}
int main() {
    int nums[] = {3, 0, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    int missing = findMissingNumber(nums, n);
    printf("The missing number is: %d\n", missing);
    return 0;
}
