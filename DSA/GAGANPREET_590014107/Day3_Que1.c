#include <stdio.h>

#define MAX 1000  // Adjust based on problem constraints

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    int freq[MAX] = {0};

    for (int i = 0; i < n; i++) {
        if (nums[i] >= 0 && nums[i] < MAX) {
            freq[nums[i]]++;
        }
    }

    int sum = 0;
    for (int i = 0; i < MAX; i++) {
        if (freq[i] == k) {
            sum += i;
        }
    }

    printf("Sum of distinct elements appearing exactly %d times: %d\n", k, sum);

    return 0;
}
