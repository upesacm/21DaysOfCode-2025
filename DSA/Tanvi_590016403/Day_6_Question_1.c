#include <stdio.h>
#include <stdbool.h>

// Function 1: Find one duplicate number in the array
int findDuplicate(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        int index = abs(nums[i]);
        if (nums[index] < 0)
            return index;
        nums[index] = -nums[index];
    }
    return -1; // should not reach here
}

// Function 2: Check if array is strictly increasing
bool isStrictlyIncreasing(int nums[], int size) {
    for (int i = 1; i < size; i++) {
        if (nums[i] <= nums[i - 1])
            return false;
    }
    return true;
}

// Function 3: Find length of the longest consecutive increasing subarray
int longestConsecutiveIncreasingSubarray(int nums[], int size) {
    if (size == 0) return 0;
    int maxLen = 1, currLen = 1;
    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1] + 1)
            currLen++;
        else
            currLen = 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }
    return maxLen;
}

int main() {
    int nums1[] = {1, 3, 4, 2, 2};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);

    int nums2[] = {1, 2, 3, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    int nums3[] = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);

    // Task 1
    int copy1[100];
    for (int i = 0; i < size1; i++) copy1[i] = nums1[i]; // create copy for mutation
    printf("Duplicate in array: %d\n", findDuplicate(copy1, size1));

    // Task 2
    printf("Is array strictly increasing? %s\n", isStrictlyIncreasing(nums2, size2) ? "true" : "false");

    // Task 3
    printf("Length of longest consecutive increasing subarray: %d\n", longestConsecutiveIncreasingSubarray(nums3, size3));

    return 0;
}
