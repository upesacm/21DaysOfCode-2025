#include <stdio.h>

int findMinimum(int nums[], int n) {
    int min = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    return min;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findMinimum(nums, n);
    printf("%d\n", result);

    return 0;
}