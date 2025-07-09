#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n], unique[n], uniqueCount = 0;
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < uniqueCount; j++) {
            if (nums[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[uniqueCount++] = nums[i];
        }
    }

    if (uniqueCount == 1) {
        printf("-1\n");
        return 0;
    }

    int first = unique[0], second = unique[0];
    for (int i = 1; i < uniqueCount; i++) {
        if (unique[i] > first) {
            second = first;
            first = unique[i];
        } else if (unique[i] > second && unique[i] < first) {
            second = unique[i];
        }
    }

    printf("%d\n", second);
    return 0;
}