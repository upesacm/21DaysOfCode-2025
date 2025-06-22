//solution
#include <stdio.h>

int isPalindrome(int nums[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (nums[i] != nums[n - 1 - i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d numbers: ", n);
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
