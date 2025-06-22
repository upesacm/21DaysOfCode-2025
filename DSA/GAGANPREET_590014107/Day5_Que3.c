#include <stdio.h>

int isPalindrome(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        if (arr[start] != arr[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}

int main() {
    int nums[] = {1, 2, 3, 2, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    if (isPalindrome(nums, size)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
