#include <stdio.h>
int longestConsecutiveSubarray(int nums[], int size) {
    if (size == 0) return 0;

    int max_len = 1, curr_len = 1;
    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1] + 1) {
            curr_len++;
            if (curr_len > max_len)
                max_len = curr_len;
        } else {
            curr_len = 1;
        }
    }
    return max_len;
}

int main() {
    int nums[] = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Length of longest consecutive increasing subarray: %d\n", longestConsecutiveSubarray(nums, size));
    return 0;
}
