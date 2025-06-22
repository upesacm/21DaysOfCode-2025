#include <stdio.h>

int findMin(int nums[], int n) {
    int min = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    return min;
}

int main() {
    int nums[] = {10, 3, 5, 2, 9, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int minElement = findMin(nums, n);
    printf("The minimum element in the array is: %d\n", minElement);
    return 0;
}
