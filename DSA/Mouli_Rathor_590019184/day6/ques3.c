#include <stdio.h>

int subarray(int nums[], int n) {
    if (n == 0) return 0;
    
    int maxlength = 1;
    int currentlength = 1;
    
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i-1] + 1) {
            currentlength++;
        } else {
            if (currentlength > maxlength) {
                maxlength = currentlength;
            }
            currentlength = 1;
        }
    }
    
    if (currentlength > maxlength) {
        maxlength = currentlength;
    }
    
    return maxlength;
}

int main() {
    int nums[] = {1, 2, 3, 5, 6, 7, 8, 10, 11};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    int result = subarray(nums, n);
    printf("Length of the subarray: %d\n", result);
    
    return 0;
}
