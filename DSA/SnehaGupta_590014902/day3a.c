//solution
#include <stdio.h>

#define MAX 100

int sumKFrequency(int nums[], int n, int k) {
    int freq[MAX] = {0};
    int sum = 0;

    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    for (int i = 0; i < MAX; i++) {
        if (freq[i] == k) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("Sum of elements appearing exactly %d times: %d\n", k, sumKFrequency(nums, n, k));

    return 0;
}
