#include <stdio.h>

int main() {
    int nums[] = {4, 2, 7, 1, 9};  
    int n = 5;                     
    int min = nums[0];             

    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];         
        }
    }

    printf("Minimum element is: %d\n", min);
    return 0;
}
