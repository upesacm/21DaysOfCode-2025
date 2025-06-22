#include <stdio.h>

int findMin(int *nums, int n) {
    int min = nums[0];
    for (int i = 1; i < n; i++)
        if (nums[i] < min)
            min = nums[i];
    return min;
}

int main() {
    int nums[] = {4, 2, 7, 1, 9};
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", findMin(nums, n));
    return 0;
}
