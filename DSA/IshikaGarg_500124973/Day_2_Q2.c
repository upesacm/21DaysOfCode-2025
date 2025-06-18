#include <stdio.h>

void findFirstAndLast(int nums[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("First: %d, Last: %d\n", nums[0], nums[n - 1]);
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    findFirstAndLast(nums1, n1); 
    return 0;
}
