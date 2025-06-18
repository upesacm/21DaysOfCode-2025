
#include <stdio.h>

int main() {
    int nums[] = {10, 20, 30, 40};
    int n = 4;
    int max = -1, second = -1;

    for(int i = 0; i < n; i++) {
        if(nums[i] > max) {
            second = max;
            max = nums[i];
        } else if(nums[i] > second && nums[i] < max) {
            second = nums[i];
        }
    }

    printf("%d\n", second);
    return 0;
}
