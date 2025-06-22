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
    int nums[] = {3, 1, 3, 4, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int duplicate = findDuplicate(nums, size);
    printf("Duplicate number: %d\n", duplicate);
    
    return 0;
}
