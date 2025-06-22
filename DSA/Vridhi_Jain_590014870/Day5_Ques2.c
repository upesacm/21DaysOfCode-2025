#include <stdio.h>

int findMissing(int nums[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    return total - sum;
}

int main() {
    int n;
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result = findMissing(nums, n);
    printf("The missing number is: %d\n", result);
    return 0;
}
