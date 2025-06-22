#include <stdio.h>
#include <stdbool.h>


bool isPalindrome(int* nums, int size) {
    for (int i = 0; i < size / 2; i++) {
        if (nums[i] != nums[size - 1 - i]) {
            return false; 
        }
    }
    return true;  
}

int main() {
    int nums[] = {1, 2, 3, 2, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Is palindrome: %s\n", isPalindrome(nums, size) ? "true" : "false"); // Output: true
    return 0;
}