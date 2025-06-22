#include <stdio.h>
#include <limits.h>

int secondLargest(int* nums, int size) {
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (nums[i] > first) {
            second = first;
            first = nums[i];
        } else if (nums[i] > second && nums[i] < first) {
            second = nums[i];
        }
    }

    if (second == INT_MIN) {
        return -1; // No second largest unique element
    }
    return second;
}

int main() {
    int nums1[] = {10, 20, 30, 40};
    printf("Output: %d\n", secondLargest(nums1, sizeof(nums1)/sizeof(nums1[0])));

    return 0;
}
