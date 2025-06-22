#include <stdio.h>
void findMissingAndRepeated(int arr[], int n) {
    int count[n+1];
    for(int i = 0; i <= n; i++)
        count[i] = 0;

    for(int i = 0; i < n; i++)
        count[arr[i]]++;

    int missing = -1, repeated = -1;
    for(int i = 1; i <= n; i++) {
        if(count[i] == 0)
            missing = i;
        else if(count[i] > 1)
            repeated = i;
    }

    printf("Missing: %d, Twice: %d\n", missing, repeated);
}

int main() {
    int nums[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    findMissingAndRepeated(nums, n);
    return 0;
}
