#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int unique[n], count = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < count; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[count++] = arr[i];
        }
    }

    // Step 2: Find largest and second largest
    if (count < 2) {
        printf("-1\n");
        return 0;
    }

    int max = unique[0];
    int second = -1;

    for (int i = 1; i < count; i++) {
        if (unique[i] > max) {
            second = max;
            max = unique[i];
        } else if (unique[i] > second && unique[i] < max) {
            second = unique[i];
        }
    }

    if (second == -1)
        printf("-1\n");
    else
        printf("%d\n", second);

    return 0;
}
