#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int arr[] = {-10, -20, -3, -40};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", findMax(arr, n));
    return 0;
}