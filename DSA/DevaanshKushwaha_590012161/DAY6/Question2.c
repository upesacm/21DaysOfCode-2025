#include <stdio.h>

int isStrictlyIncreasing(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] <= arr[i - 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isStrictlyIncreasing(arr, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
