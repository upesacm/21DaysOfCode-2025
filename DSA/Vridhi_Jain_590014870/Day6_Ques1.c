#include <stdio.h>

int findDuplicate(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] == nums[j]) {
                return nums[i];
            }
        }
    }
    return -1;
}

int main() {
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int duplicate = findDuplicate(nums, n);
    
    printf("The duplicate number is: %d\n", duplicate);
    
    return 0;
}