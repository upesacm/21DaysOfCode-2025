#include <stdio.h>
int removeValue(int nums[], int n, int val) {
    int i = 0; 
    for (int j = 0; j < n; j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i; 
}
void printArray(int nums[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);
    printf("\n");
}
int main() {
    int nums[] = {3, 2, 2, 3, 4, 2, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int val = 2;
    int newLength = removeValue(nums, n, val);
    printf("Array after removing %d:\n", val);
    printArray(nums, newLength);
    printf("New length: %d\n", newLength);
    return 0;
}
