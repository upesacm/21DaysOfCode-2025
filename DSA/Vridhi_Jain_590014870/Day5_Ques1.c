#include <stdio.h>

int findUnique(int nums[], int n) {
    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= nums[i];
    }
    return unique;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result = findUnique(nums, n);
    printf("The unique element is: %d\n", result);
    return 0;
}
