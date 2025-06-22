#include <stdio.h>

int findsecondlargest(int nums[], int n) {
    int max = -1, second = -1;
    
    for (int i = 0; i < n; i++) {
        if (nums[i] > max) {
            second = max;
            max = nums[i];
        } else if (nums[i] > second && nums[i] != max) {
            second = nums[i];
        }
    }

    return second == -1 ? -1 : second;
}

int main() {
    int nums[] = {10, 20, 30, 40};
    int n = sizeof(nums)/sizeof(nums[0]);
    
    int secondLargest = findsecondlargest(nums, n);
    if (secondLargest == -1)
        printf("Second largest doesn't exist\n");
    else
        printf("Second largest = %d\n", secondlargest);

    return 0;
}
