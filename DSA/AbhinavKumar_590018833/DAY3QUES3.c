#include <stdio.h>

int findSecondLargest(int nums[], int n) {
    if (n < 2)
        return -1;
    int first = -2147483648;
    int second = -2147483648;
    for (int i = 0; i < n; i++) {
        if (nums[i] > first) {
            second = first;
            first = nums[i];
        } else if (nums[i] > second && nums[i] != first) 
            second = nums[i];
    }
    if (second == -2147483648)
        return -1;
    return second;
}
int main() {
    int nums1[] = {10, 20, 30, 40};
    int nums2[] = {5, 5, 5};
    int nums3[] = {3, 2, 1};

    printf("Output: %d\n", findSecondLargest(nums1, 4)); 
    printf("Output: %d\n", findSecondLargest(nums2, 3)); 
    printf("Output: %d\n", findSecondLargest(nums3, 3)); 

    return 0;
}
