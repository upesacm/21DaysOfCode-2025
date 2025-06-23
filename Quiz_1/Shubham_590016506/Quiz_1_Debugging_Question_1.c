#include <stdio.h>

int maxSubarraySum(int a[], int n) {
    int max = a[0], sum = a[0];
    for (int i = 1; i < n; i++) {
        sum = (sum + a[i] > a[i]) ? sum + a[i] : a[i];
        max = (sum > max) ? sum : max;
    }
    return max;
}

int main() {
    int arr[] = {-3, -2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", maxSubarraySum(arr, n));
    return 0;
}