#include <stdio.h>

void inputArray(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
}

int sumOfArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    inputArray(arr, n);              
    int total = sumOfArray(arr, n);  

    printf("Sum of the array elements: %d\n", total);

    return 0;
}
