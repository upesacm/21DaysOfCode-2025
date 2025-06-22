#include <stdio.h>

void replacenegtivewith0(int nums[], int size) {
    for(int i = 0; i < size; i++) {
        if(nums[i] < 0) {
            nums[i] = 0;
        }
    }
}

int main() {
    int nums[] = {-1, 2, -3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Initial array: \n");
    for(int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    replacenegtivewith0(nums, size);

    printf("\nModified array: \n");
    for(int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}