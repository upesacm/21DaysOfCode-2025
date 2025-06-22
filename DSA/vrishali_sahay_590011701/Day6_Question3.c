#include <stdio.h>

int longestConsecutiveIncreasingSubarray(int* nums, int n) {
    if (n == 0) return 0;
    int maxLen = 1, currLen = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i-1] + 1) {
            currLen++;
            if (currLen > maxLen) maxLen = currLen;
        } else {
            currLen = 1;
        }
    }
    return maxLen;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result = longestConsecutiveIncreasingSubarray(nums, n);
    printf("Length of longest consecutive increasing subarray: %d\n", result);
    return 0;
}