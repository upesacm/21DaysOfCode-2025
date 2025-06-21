#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int* nums, int size) {
    for (int i = 0; i < size / 2; i++) {
        if (nums[i] != nums[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int* nums = (int*)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    if (isPalindrome(nums, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    free(nums);
    return 0;
}
