#include <stdio.h>

int sumOfEvenNumbers(int nums[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] % 2 == 0) {
            sum += nums[i];
        }
    }
    return sum;
}

int main() {
    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[] = {10, 15, 20};
    int nums3[] = {1, 3, 5};

    printf("Output: %d\n", sumOfEvenNumbers(nums1, 5));  
    printf("Output: %d\n", sumOfEvenNumbers(nums2, 3)); 
    printf("Output: %d\n", sumOfEvenNumbers(nums3, 3));  

    return 0;
}
