#include <stdio.h>
// Function to replace all negative numbers with zero
void replaceNegatives(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int num1[] = {-1, 2, -3, 4, 5};
    int size1 = sizeof(num1) / sizeof(num1[0]);

    replaceNegatives(num1, size1);
    printf("Modified array 1: ");
    printArray(num1, size1);
    return 0;
}

