#include <stdio.h>
int findUnique(int nums[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= nums[i];  
    }
    return result;
}
int main() {
    int nums[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int unique = findUnique(nums, n);
    printf("The unique element is: %d\n", unique);
    return 0;
}
