#include <stdio.h>

#define SIZE 10 

void replaceNegativeWithZero(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        if (nums[i] < 0) {
            nums[i] = 0; 
        }
    }
}

int main() {
    int nums[SIZE]; 

    
    printf("Enter %d elements of the array:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &nums[i]);
    }

    
    replaceNegativeWithZero(nums, SIZE);

    
    printf("Modified array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

