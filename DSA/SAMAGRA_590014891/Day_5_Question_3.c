#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int* nums, int numsSize) {
    int left = 0;
    int right = numsSize - 1;

    while (left < right) {
        if (nums[left] != nums[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    int nums[] = {1, 2, 3, 2, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    if (isPalindrome(nums, size)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
