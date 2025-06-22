//solution
#include <stdio.h>

int findMissingNumber(int nums[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    return total - sum;
}

int main() {
    int n;
    printf("Enter the value of n (array will have n elements from 0 to n with one missing): ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d numbers (from 0 to %d with one missing): ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int missing = findMissingNumber(nums, n);
    printf("Missing number: %d\n", missing);

    return 0;
}
