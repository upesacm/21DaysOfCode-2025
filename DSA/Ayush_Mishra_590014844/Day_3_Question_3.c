#include <stdio.h>
#include <limits.h>
int findSecondLargest(int* nums, int n) {
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (nums[i] > first) {
            second = first;
            first = nums[i];
        } else if (nums[i] > second && nums[i] != first) {
            second = nums[i];
        }
    }

    if (second == INT_MIN) return -1;
    return second;
}

int main() {
    int nums[] = {10, 20, 30, 40};
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("Output: %d\n", findSecondLargest(nums, n));
    return 0;
}
