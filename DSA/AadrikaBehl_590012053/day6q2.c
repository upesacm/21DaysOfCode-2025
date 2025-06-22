#include <stdio.h>
#include <stdbool.h>

bool isStrictlyIncreasing(int nums[], int size) {
    for (int i = 1; i < size; i++) {
        if (nums[i] <= nums[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d integers:\n", n);
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
