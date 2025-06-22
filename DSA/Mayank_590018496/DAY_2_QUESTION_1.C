#include <stdio.h>

int sum_of_evens(int nums[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            sum += nums[i];
        }
    }
    return sum;
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Sum of even numbers: %d\n", sum_of_evens(nums, n));

    return 0;
}
