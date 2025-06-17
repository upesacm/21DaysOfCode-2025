#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if(nums[i] % 2 == 0) {
            sum += nums[i];
        }
    }

    printf("Sum of all even numbers: %d\n", sum);

    return 0;
}
