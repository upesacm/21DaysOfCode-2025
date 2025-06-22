
#include <stdio.h>
int findMinimum(int nums[], int n) {
    if (n <= 0) {
        return -1; 
    }
    
    int minElement = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] < minElement) {
            minElement = nums[i];
        }
    }
    
    return minElement;
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1; 
    }
    
    int nums[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int minElement = findMinimum(nums, n);
    printf("The minimum element in the array is: %d\n", minElement);
    
    return 0;
}

