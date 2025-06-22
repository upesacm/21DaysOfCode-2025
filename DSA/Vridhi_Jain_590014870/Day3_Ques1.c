#include <stdio.h>
#define MAX 100
int main() {
    int nums[] = {2, 3, 9, 9};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 1;

    int unique[MAX], freq[MAX];
    int count = 0;

    for (int i = 0; i < n; i++) {
        int exists = 0;
        for (int j = 0; j < count; j++) {
            if (unique[j] == nums[i]) {
                exists = 1;
                break;
            }
        }
        if (!exists) {
            unique[count++] = nums[i];
        }
    }

    for (int i = 0; i < count; i++) {
        freq[i] = 0;
        for (int j = 0; j < n; j++) {
            if (unique[i] == nums[j]) {
                freq[i]++;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < count; i++) {
        if (freq[i] == k) {
            sum += unique[i];
        }
    }

    printf("%d\n", sum); 
    return 0;
}
