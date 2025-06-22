#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int* nums, int numsSize) {
    for (int i = 0; i < numsSize / 2; i++) {
        if (nums[i] != nums[numsSize - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    if (isPalindrome(nums, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}