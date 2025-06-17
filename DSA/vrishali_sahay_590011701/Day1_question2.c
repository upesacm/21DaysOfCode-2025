#include <stdio.h>

void findMissingAndRepeated(int arr[], int n) {
    int i;
    int repeated = -1, missing = -1;
    int count[n+1];
    for (i = 0; i <= n; i++) count[i] = 0;

    // Count occurrences
    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Find repeated and missing
    for (i = 1; i <= n; i++) {
        if (count[i] == 0)
            missing = i;
        else if (count[i] == 2)
            repeated = i;
    }

    printf("Missing: %d, Twice: %d\n", missing, repeated);
}

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (1 to %d):\n", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMissingAndRepeated(arr, n);

    return 0;
}
