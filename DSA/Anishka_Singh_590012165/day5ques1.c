#include <stdio.h>

int unique(int arr[], int n) {
    int result = 0;
    for(int i = 0; i < n; i++) {
        result ^= arr[i];  
    }
    return result;
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("Unique Element: %d\n", unique(nums, n));
    return 0;
}
