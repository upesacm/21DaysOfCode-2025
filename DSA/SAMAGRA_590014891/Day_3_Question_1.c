#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        int isCounted = 0;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isCounted = 1;
                break;
            }
        }

        if (isCounted)
            continue;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count == k)
            sum += arr[i];
    }

    printf("Sum of elements appearing exactly %d times: %d\n", k, sum);
    return 0;
}
