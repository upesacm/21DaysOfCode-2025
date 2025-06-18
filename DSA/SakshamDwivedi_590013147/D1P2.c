#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], repeated[100];
    int n, repCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, n);

    for (int i = 0; i < n - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff > 1) {
            for (int j = 1; j < diff; j++) {
                printf("Missing : %d\n", arr[i] + j);
            }
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            int alreadyPrinted = 0;
            for (int k = 0; k < repCount; k++) {
                if (repeated[k] == arr[i]) {
                    alreadyPrinted = 1;
                    break;
                }
            }
            if (!alreadyPrinted) {
                printf("Repeated : %d\n", arr[i]);
                repeated[repCount++] = arr[i];
            }
        }
    }

    return 0;
}

