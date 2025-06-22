#include <stdio.h>

int isPalindrome(int nums[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (nums[i] != nums[size - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int nums1[] = {1, 2, 3, 2, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Is palindrome: %s\n", isPalindrome(nums1, size1) ? "true" : "false");
    int nums2[] = {1, 2, 3, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Is palindrome: %s\n", isPalindrome(nums2, size2) ? "true" : "false");
    int nums3[] = {5, 5, 5, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Is palindrome: %s\n", isPalindrome(nums3, size3) ? "true" : "false");
    return 0;
}
