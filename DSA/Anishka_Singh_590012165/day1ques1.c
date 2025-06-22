#include <stdio.h>

void replacenegative(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {-1, 2, -3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    replacenegative(a, n);
    printarray(a, n);

    return 0;
}
