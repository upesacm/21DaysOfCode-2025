#include <stdio.h>

int main() {
    int arr[] = {4, 2, 7, 1, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int m = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] < m) {
            m = arr[i];
        }
    }
    printf("%d\n", m);
    return 0;
}
