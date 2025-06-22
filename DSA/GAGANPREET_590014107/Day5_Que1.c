#include <stdio.h>

int findUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            return arr[i];
        }
    }
    return -1; 
}

int main() {
    int nums[] = {1, 2, 2, 3, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = findUnique(nums, size);
    printf("The unique number is: %d\n", result);

    return 0;
}
