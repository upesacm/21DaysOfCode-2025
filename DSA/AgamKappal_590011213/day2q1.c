
#include <stdio.h>

int main() {
    int nums[100], n, i, sum = 0;

    // Input the size of array
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Add only even numbers
    for (i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            sum = sum + nums[i];
        }
    }

    // Print the sum
    printf("Sum of even numbers = %d\n", sum);

    return 0;
}
