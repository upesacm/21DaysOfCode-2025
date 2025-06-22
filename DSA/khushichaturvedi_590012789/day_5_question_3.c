#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int nums[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        if (nums[start] != nums[end]) {
            return false;  
        }
        start++;
        end--;
    }
    return true;  
}
int main() {
    int nums[] = {1, 2, 3, 2, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    if (isPalindrome(nums, n)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
    return 0;
}
