#include <stdio.h>

int removeElement(int nums[], int n, int val) {
    int write = 0;

    for (int read = 0; read < n; read++) {
        if (nums[read] != val) {
            nums[write++] = nums[read];
        }
    }

    return write; 
}

void printArray(int nums[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {3, 2, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int val = 3;

    int newLength = removeElement(nums, n, val);

    printf("New length: %d\n", newLength);       
    printf("Modified array: ");
    printArray(nums, newLength);                

    return 0;
}
