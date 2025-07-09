#include <stdio.h>

typedef struct {
    int value;
    int count;
} Element;

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    Element freq[n];
    int unique = 0;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        int found = 0;
        for (int j = 0; j < unique; j++) {
            if (freq[j].value == nums[i]) {
                freq[j].count++;
                found = 1;
                break;
            }
        }
        if (!found) {
            freq[unique].value = nums[i];
            freq[unique].count = 1;
            unique++;
        }
    }

    printf("Enter k: ");
    scanf("%d", &k);

    int sum = 0;
    for (int i = 0; i < unique; i++) {
        if (freq[i].count == k) {
            sum += freq[i].value;
        }
    }

    printf("Sum of elements appearing exactly %d times: %d\n", k, sum);
    return 0;
}