
#include <stdio.h>

int main() {
    int nums[] = {3, 2, 1};
    int n = 3;
    int largest = -1, secondLargest = -1;

    for(int i = 0; i < n; i++) {
        if(nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
        } else if(nums[i] > secondLargest && nums[i] < largest) {
            secondLargest = nums[i];
        }
    }

    printf("%d\n", secondLargest);
    return 0;
}
