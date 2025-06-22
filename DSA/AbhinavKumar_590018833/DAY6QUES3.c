#include <stdio.h>

int longestConsecutive(int a[], int n) {
    int max = 1, curr = 1;
    for (int i = 1; i < n; i++) {
        curr = (a[i] == a[i - 1] + 1) ? curr + 1 : 1;
        if (curr > max) max = curr;
    }
    return max;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = longestConsecutive(a, n);
    printf("Length of longest consecutive increasing subarray: %d\n", result);

    return 0;
}
