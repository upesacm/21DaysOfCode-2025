#include <stdio.h>

// Function to calculate the sum of array elements
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int result1 = calculateSum(arr1, size1);
    printf("Sum: %d\n", result1);  
    return 0;
}

