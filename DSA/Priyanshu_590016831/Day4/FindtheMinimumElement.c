#include <stdio.h>
#include <limits.h>

int findMinimum(int nums[], int size) {
    if (size == 0) {
        printf("Array must not be empty.\n");
        return INT_MAX;
    }

    int min_val = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] < min_val) {
            min_val = nums[i];
        }
    }

    return min_val;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int nums[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int min = findMinimum(nums, n);
    printf("Minimum element: %d\n", min);

    return 0;
}

