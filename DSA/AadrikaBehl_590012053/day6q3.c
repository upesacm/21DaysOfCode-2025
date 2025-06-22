#include <stdio.h>

int findLongestConsecutiveSubarray(int nums[], int n) {
    int maxLen = 1, currLen = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1] + 1) {
            currLen++;
            if (currLen > maxLen)
                maxLen = currLen;
        } else {
            currLen = 1; 
        }
    }

    return maxLen;
}

int main() {
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findLongestConsecutiveSubarray(nums, n);
    printf("Length of longest consecutive increasing subarray: %d\n", result);

    return 0;
}

