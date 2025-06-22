#include <stdio.h>

int findMissing(int* nums, int size) {
    int n = size + 1;
    int total = n * (n - 1) / 2;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }
    return total - sum;
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
    
    int missingNumber = findMissing(nums, n);
    printf("The missing number is: %d\n", missingNumber);
    
    return 0;
}
