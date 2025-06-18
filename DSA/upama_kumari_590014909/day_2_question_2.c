#include <stdio.h>
void findFirstAndLast(int nums[], int n) {
    if (n > 0) {
        printf("First: %d, Last: %d\n", nums[0], nums[n - 1]);
    } else {
        printf("Array is empty.\n");
    }
}
int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    findFirstAndLast(nums, n);

    return 0;
}
