#include <stdio.h>

void find_missing_and_repeated(int nums[], int n, int *missing, int *repeated) {
    int freq[n + 1];
    
    for (int i = 1; i <= n; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) {
            *missing = i;
        } else if (freq[i] > 1) {
            *repeated = i;
        }
    }
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int missing, repeated;
    find_missing_and_repeated(nums, n, &missing, &repeated);

    printf("Repeated number: %d\n", repeated);
    printf("Missing number: %d\n", missing);

    return 0;
}
