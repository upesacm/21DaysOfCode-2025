#include <stdio.h>

int singleNumber(int nums[], int size) {
    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique ^= nums[i];  
    }
    return unique;
}

int main() {
    int nums1[] = {2, 2, 1};
    printf("%d\n", singleNumber(nums1, 3)); 
    return 0;
}
