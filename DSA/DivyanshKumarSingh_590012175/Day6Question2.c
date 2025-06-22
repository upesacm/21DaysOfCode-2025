#include <stdio.h>
#include <stdbool.h>

bool isIncreasing(int* nums, int n) {
    for (int i = 1; i < n; i++) {
        if (nums[i] <= nums[i - 1]) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("false\n");
        return 0;
    }

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    if (isIncreasing(nums, n)) 
        printf("true\n");
    else 
        printf("false\n");

    return 0;
}
