#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int main() {
    int n, m, i, j, nums1[MAX], nums2[MAX], count1[MAX] = {0}, count2[MAX] = {0}, unique[MAX], unique_count = 0;
    bool equal = true;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n);
    printf("Enter first array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums1[i]);

    printf("Enter number of elements in second array: ");
    scanf("%d", &m);
    printf("Enter second array: ");
    for(i = 0; i < m; i++)
        scanf("%d", &nums2[i]);

    if(n != m) {
        printf("false\n");
        return 0;
    }

    // Count frequencies for nums1
    for(i = 0; i < n; i++) {
        int found = 0;
        for(j = 0; j < unique_count; j++) {
            if(nums1[i] == unique[j]) {
                count1[j]++;
                found = 1;
                break;
            }
        }
        if(!found) {
            unique[unique_count] = nums1[i];
            count1[unique_count]++;
            unique_count++;
        }
    }

    // Count frequencies for nums2
    for(i = 0; i < m; i++) {
        int found = 0;
        for(j = 0; j < unique_count; j++) {
            if(nums2[i] == unique[j]) {
                count2[j]++;
                found = 1;
                break;
            }
        }
        if(!found) {
            equal = false;
            break;
        }
    }

    // Compare frequencies
    for(i = 0; i < unique_count; i++) {
        if(count1[i] != count2[i]) {
            equal = false;
            break;
        }
    }

    printf(equal ? "true\n" : "false\n");
    return 0;
}