#include <stdio.h>
#include <stdbool.h>

int findDuplicate(int* nums, int numsSize) {
    bool seen[numsSize];
    for (int i = 0; i < numsSize; i++) seen[i] = false;

    for (int i = 0; i < numsSize; i++) {
        if (seen[nums[i]])
            return nums[i];  
        seen[nums[i]] = true;
    }
    return -1;  
}

int main() {
    int nums[] = {1, 3, 4, 2, 2};
    int size = sizeof(nums)/sizeof(nums[0]);
    printf("Duplicate: %d\n", findDuplicate(nums,size)); 
    return 0;
}