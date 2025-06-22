#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    if (containsDuplicate(nums, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
