#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int nums[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (nums[i] != nums[n - 1 - i]) {
            return false;
        }
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

    return 0;
}
