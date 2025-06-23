#include <stdio.h>

int findMax(int arr[], int n) {
    // Start with the first element as the current maximum
    int max = arr[0];

    // Check the rest of the elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {-3, -2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMax(arr, n);
    printf("Maximum element: %d\n", result); // Output should be -1

    return 0;
}

/*
1. The original code had a bug: 'max' was declared but not initialized.
2. This could lead to comparing array elements with garbage value, giving wrong results.
3. Fixed by setting 'max' to arr[0], and then starting the loop from index 1.
*/
