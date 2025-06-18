#include <stdio.h>

void firstandlastelement(int arr[], int size, int *first, int *last) {
    if (size > 0) {
        *first = arr[0];
        *last = arr[size - 1];
    }
}
int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int first, last;
    firstandlastelement(arr, size, &first, &last);
    printf("\nFIRST ELEMENT: %d\n", first);
    printf("LAST ELEMENT: %d\n", last);

    return 0;
}