#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int nums[], int size) {
    int left = 0;
    int right = size - 1;
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
    int nums1[] = {1, 2, 3, 2, 1};
    int nums2[] = {1, 2, 3};
    printf("%s\n", isPalindrome(nums1, 5) ? "true" : "false"); // true
    printf("%s\n", isPalindrome(nums2, 3) ? "true" : "false"); // false
    return 0;
}
