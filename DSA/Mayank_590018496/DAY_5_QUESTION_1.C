#include <stdio.h>

int findUnique(int nums[], int n) {
    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= nums[i];
    }
    return unique;
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = findUnique(nums, n);

    printf("The unique element is: %d\n", result);

    return 0;
}
