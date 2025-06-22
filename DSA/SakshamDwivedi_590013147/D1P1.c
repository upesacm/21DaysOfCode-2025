#include <stdio.h>

int main() {
    int arr[100];
    int len;

    printf("Enter number of elements in the array: ");
    scanf("%d", &len);

    printf("Enter %d integers:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < len; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    printf("New Array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
