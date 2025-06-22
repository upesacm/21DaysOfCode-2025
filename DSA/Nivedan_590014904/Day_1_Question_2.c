#include <stdio.h>
void find(int arr[], int n) {
    int duplicate = -1;
    int missing = -1;
    for (int i = 1; i <= n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                count++;
            }
        }
        if (count == 2) {
            duplicate = i;
        } else if (count == 0) {
            missing = i;
        }
    }
    printf("Missing: %d, Twice: %d\n", missing, duplicate);
}
int main() {
    int arr[100], n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements (range: 1 to %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    find(arr, n);
    return 0;
}
