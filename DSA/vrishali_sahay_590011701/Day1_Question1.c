#include <stdio.h>

// Replace all negative numbers in the array with zero
void replaceNegativesWithZero(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            nums[i] = 0;
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    replaceNegativesWithZero(nums, n);

    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
