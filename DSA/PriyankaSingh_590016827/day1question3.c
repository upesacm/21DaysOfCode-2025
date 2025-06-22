#include <stdio.h>

int main() {
    int size, sum = 0;
    
    // Input the array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    if (size <= 0) {
        printf("Error: Array size must be a positive integer.\n");
        return 1;
    }
    
    int arr[size];
    
    // Input array elements
    printf("Enter %d integer elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculating sum of array elements
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    printf("The sum of all array elements is: %d\n", sum);
    
    return 0;
}