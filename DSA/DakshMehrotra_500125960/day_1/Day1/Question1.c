#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] < 0) {
            arr[i] = 0;
        }
    }

    printf("Modified array:\n[");
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i != n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}