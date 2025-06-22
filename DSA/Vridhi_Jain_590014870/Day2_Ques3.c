#include <stdio.h>

int main() {
    int n, i, j, count1 = 0, count2 = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums1[n], nums2[n], visited[n];

    printf("Enter %d elements for nums1:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter %d elements for nums2:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
        visited[i] = 0;
    }

    for(i = 0; i < n; i++) {
        count1 = 0;
        count2 = 0;
        for(j = 0; j < n; j++) {
            if(nums1[i] == nums1[j]) {
                count1++;
            }
            if(nums1[i] == nums2[j]) {
                count2++;
            }
        }
        if(count1 != count2) {
            printf("false\n");
            return 0;
        }
    }

    printf("true\n");
    return 0;
}
