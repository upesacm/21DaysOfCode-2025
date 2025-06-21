#include <stdio.h>

#define MAX 1000  // Assumes elements are in range 0 to 999

int main() {
    int nums[100], freq[MAX] = {0};
    int n, i, hasDuplicate = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers (0 to 999):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        // Check if this number has already appeared
        if (freq[nums[i]] > 0) {
            hasDuplicate = 1;
            break;
        }

        freq[nums[i]]++;
    }

    if (hasDuplicate) {
        printf("true\n");  // Duplicate found
    } else {
        printf("false\n"); // All elements are unique
    }

    return 0;
}
