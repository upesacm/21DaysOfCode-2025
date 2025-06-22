#include <stdio.h>
#include <stdbool.h>

bool isStrictlyIncreasing(int* nums, int n) {
    for (int i = 1; i < n; i++) {
        if (nums[i] <= nums[i-1]) {
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
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    if (isStrictlyIncreasing(nums, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}