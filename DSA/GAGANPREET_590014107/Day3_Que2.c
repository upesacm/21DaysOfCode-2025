#include <stdio.h>

int containsDuplicate(int nums[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] == nums[j]) {
                return 1; 
            }
        }
    }
    return 0; 
}

int main() {
    int nums[] = {1, 2, 3, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    if (containsDuplicate(nums, n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
