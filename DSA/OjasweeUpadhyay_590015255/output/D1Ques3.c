#include<stdio.h>
int sum(int arr[], int n) {
    int total=0;
    for (int i=0;i<n;i++) {
        total+=arr[i];
    }
    return total;
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    int total = sum(arr, n);
    printf("Sum of the array elements: %d\n", total);
    return 0;
}