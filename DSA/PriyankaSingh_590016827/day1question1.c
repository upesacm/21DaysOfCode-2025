#include <stdio.h>

int main() {
    int n;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Declaring the array
    int nums[n];
    
    // Input the element of the array
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Replacing negative numbers with zero
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            nums[i] = 0;
        }
    }
    
    // Printing the modified array
    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    return 0;
}