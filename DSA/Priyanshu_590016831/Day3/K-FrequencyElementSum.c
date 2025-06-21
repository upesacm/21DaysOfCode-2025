#include <stdio.h>

#define MAX 1000  // Adjust as needed, assuming values from 0 to 999

int main() {
    int nums[100], freq[MAX] = {0};
    int n, k, i, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers (0 to 999):\n", n);
    for (i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        nums[i] = val;
        freq[val]++;
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    for (i = 0; i < MAX; i++) {
        if (freq[i] == k) {
            sum += i;
        }
    }

    printf("Sum of elements that appear exactly %d times: %d\n", k, sum);

    return 0;
}
