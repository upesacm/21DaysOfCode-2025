//solution
#include <stdio.h>

void findFirstAndLast(int nums[], int n) {
    if (n > 0) {
        printf("First: %d, Last: %d\n", nums[0], nums[n - 1]);
    } else {
        printf("Array is empty!\n");
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    findFirstAndLast(nums, n);

    return 0;
}
