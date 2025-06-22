#include <stdio.h>

int longestConsecutiveIncreasingSubarray(int nums[], int size) {
    if (size == 0) return 0;
    int maxLength = 1;
    int currLength = 1;

    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1] + 1) {
            currLength++;
        } else {
            currLength = 1;
        }
        if (currLength > maxLength) {
            maxLength = currLength;
        }
    }
    return maxLength;
}

int main() {
    int nums1[] = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
    printf("%d\n", longestConsecutiveIncreasingSubarray(nums1, 10));
    return 0;
}
