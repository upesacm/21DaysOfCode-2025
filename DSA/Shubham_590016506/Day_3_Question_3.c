#include <stdio.h>
#include <limits.h>

int findSecondLargest(int* nums, int size) {
    int max = INT_MIN, secondMax = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (nums[i] > max) {
            secondMax = max;
            max = nums[i];
        } else if (nums[i] > secondMax && nums[i] < max) {
            secondMax = nums[i];
        }
    }
    return (secondMax == INT_MIN) ? -1 : secondMax;
}

int main() {
    int nums1[] = {10, 20, 30, 40};
    int nums2[] = {5, 5, 5};
    int nums3[] = {3, 2, 1};

    printf("Output 1: %d\n", findSecondLargest(nums1, 4));
    printf("Output 2: %d\n", findSecondLargest(nums2, 3));
    printf("Output 3: %d\n", findSecondLargest(nums3, 3));
    return 0;
}