#include <stdio.h>
int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            sum += nums[i];
        }
    }

    printf("Sum of even numbers: %d\n", sum);
    return 0;
}
