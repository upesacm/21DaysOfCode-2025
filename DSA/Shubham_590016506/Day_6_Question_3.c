#include <stdio.h>

int longestConsecIncSubarray(int* nums, int size) {
    int maxLen = 1, curr = 1;
    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1] + 1)
            curr++;
        else
            curr = 1;
        if (curr > maxLen) maxLen = curr;
    }
    return maxLen;
}

int main() {
    int nums[] = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", longestConsecIncSubarray(nums, size)); 
    return 0;
}