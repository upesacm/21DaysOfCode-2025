#include <stdio.h>

int main() {
    int nums[100];
    int n, i;
    int first = -1, second = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");  // Not enough elements
        return 0;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Find the first and second largest unique elements
    for (i = 0; i < n; i++) {
        int current = nums[i];

        if (current > first) {
            second = first;
            first = current;
        } else if (current > second && current < first) {
            second = current;
        }
    }

    if (second == -1) {
        printf("-1\n");  // No second largest unique element
    } else {
        printf("%d\n", second);  // Output second largest
    }

    return 0;
}
