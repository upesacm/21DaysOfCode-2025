#include <stdio.h>

#define MAX 1000

int main() {
    int n, k, nums[MAX], freq[MAX] = {0}, unique[MAX], unique_count = 0, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    // Count frequencies
    for(int i = 0; i < n; i++) {
        int found = 0;
        for(int j = 0; j < unique_count; j++) {
            if(nums[i] == unique[j]) {
                freq[j]++;
                found = 1;
                break;
            }
        }
        if(!found) {
            unique[unique_count] = nums[i];
            freq[unique_count]++;
            unique_count++;
        }
    }

    // Sum elements with frequency k
    for(int i = 0; i < unique_count; i++) {
        if(freq[i] == k)
            sum += unique[i];
    }
    printf("%d\n", sum);
    return 0;
}