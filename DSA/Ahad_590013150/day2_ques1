#include <stdio.h>

int sumOfEvenNumbers(int nums[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            total += nums[i];
        }
    }
    return total;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = sumOfEvenNumbers(nums, n);
    printf("Sum of even numbers: %d\n", result);

    return 0;
}
