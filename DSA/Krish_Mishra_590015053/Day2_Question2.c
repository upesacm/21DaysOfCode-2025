#include <stdio.h>

void findFirstAndLast(int nums[], int n) {
    if (n == 0) {
        printf("Array is empty\n");
        return;
    }
    int first = nums[0];
    int last = nums[n - 1];

    printf("First: %d, Last: %d\n", first, last);
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid size!\n");
        return 1;
    }
    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    findFirstAndLast(nums, n);
    return 0;
}
