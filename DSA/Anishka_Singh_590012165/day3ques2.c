#include <stdio.h>
#include <stdbool.h>

bool duplicate(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j])
                return true;
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 2};
    int n = sizeof(nums)/sizeof(nums[0]);
    
    if (duplicate(nums, n))
        printf("Duplicate found\n");
    else
        printf("No duplicates\n");

    return 0;
}
