#include <stdio.h>

int removeElement(int nums[], int n, int val) {
    int j = 0; 

    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j; 
}

int main() {
    int nums[] = {3, 2, 2, 3, 4, 3, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int val = 3;

    int newLength = removeElement(nums, n, val);

    printf("New length: %d\n", newLength);
    printf("Modified array: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
