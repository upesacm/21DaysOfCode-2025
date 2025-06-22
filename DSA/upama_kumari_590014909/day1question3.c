#include <stdio.h>

int sumOfArray(int arr[], int size) {
    int sum = 0;

    // Traverse through each element and add it to sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Sum: %d\n", sumOfArray(arr1, size1)); 

    return 0;
}
