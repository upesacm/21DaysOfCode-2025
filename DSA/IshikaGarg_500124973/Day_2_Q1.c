#include <stdio.h>

int sumOfEvenNumbers(int nums[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            sum += nums[i];
        }
    }
    return sum;
}

int main() {
    int nums1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);

    printf("Sum of even numbers: %d\n", sumOfEvenNumbers(nums1, n1)); // Output: 6

    return 0;
}
