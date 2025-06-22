#include <stdio.h>
#include <stdlib.h>

void findMissingAndRepeating(int arr[], int n, int *missing, int *repeating) {
    
    int *temp = (int *)calloc(n + 1, sizeof(int));
    
    for (int i = 0; i < n; i++) {
        temp[arr[i]]++;
    }
    
    // Finding the repeating and missing numbers
    for (int i = 1; i <= n; i++) {
        if (temp[i] == 0) {
            *missing = i;
        } else if (temp[i] == 2) {
            *repeating = i;
        }
    }
    
    free(temp);
}

int main() {
    int n;
    
    // Input the size of array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Declaring the array
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements (1 to %d) with one missing and one duplicate:\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int missing, repeating;
    findMissingAndRepeating(arr, n, &missing, &repeating);
    
    printf("Missing number: %d\n", missing);
    printf("Repeating number: %d\n", repeating);
    
    return 0;
}