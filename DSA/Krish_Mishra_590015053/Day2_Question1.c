#include <stdio.h>
int sumOfEvenNumbers(int nums[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            sum = sum + nums[i];
        }
    }
    return sum;
}

int main() {
    int nums[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result = sumOfEvenNumbers(nums, n);
    printf("Sum of even numbers: %d\n", result);
    return 0;
}
