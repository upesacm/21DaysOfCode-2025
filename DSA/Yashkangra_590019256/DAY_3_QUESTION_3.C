#include <stdio.h>
#include <limits.h>

int secondLargest(int* nums, int size) {
    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < size; ++i) {
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
    int nums[] = {7, 5, 7, 3, 9, 5, 9};
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = secondLargest(nums, size);
    printf("Second largest unique element: %d\n", result);
    return 0;
}
