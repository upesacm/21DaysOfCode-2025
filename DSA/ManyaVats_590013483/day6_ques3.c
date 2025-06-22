#include <stdio.h>

int main() {
    int nums[] = {5, 6, 7, 3, 4, 5, 6, 7, 8};
    int size = sizeof(nums) / sizeof(nums[0]);

    int maxLen = 1;
    int currLen = 1;

    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1] + 1) {
            currLen = currLen + 1;
        } else {
            currLen = 1;
        }

        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }

    printf("Length of longest consecutive increasing subarray: %d\n", maxLen);

    return 0;
}
