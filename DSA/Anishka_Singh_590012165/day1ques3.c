#include <stdio.h>

int sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Sum = %d\n", sum(a, n));
    return 0;
}
