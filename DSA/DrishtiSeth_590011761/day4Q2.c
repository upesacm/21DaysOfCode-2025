#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int shift = 2;
    int len = sizeof(arr) / sizeof(arr[0]);
    int res[5];

    for (int i = 0; i < len; i++) {
        res[(i + shift) % len] = arr[i];
    }

    for (int i = 0; i < len; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}
