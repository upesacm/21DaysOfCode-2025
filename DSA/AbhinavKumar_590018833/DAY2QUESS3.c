#include <stdio.h>

void printFirstAndLast(int nums[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("First: %d, Last: %d\n", nums[0], nums[n - 1]);
}
int main() {
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {7};
    int nums3[] = {5, 9, 2};
    printFirstAndLast(nums1, 4);  
    printFirstAndLast(nums2, 1);  
    printFirstAndLast(nums3, 3);  

    return 0;
}
