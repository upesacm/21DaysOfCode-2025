#include <stdio.h>
int findDup(int arr[], int n) {
    for (int i = 1; i <= n; i++) { 
        int count = 0;
        for (int j = 0; j <= n; j++) { 
            if (arr[j] == i) {
                count++;
            }
            if (count > 1) {
                return i;
            }
        }
    }
    return -1;
}
int main() {
    int n;
    printf("Enter the value of n (array will have n+1 elements): ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements (values from 1 to %d):\n", n + 1, n);
    for (int i = 0; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    int duplicate = findDup(arr, n);
    printf("The duplicate element is %d\n", duplicate);
    return 0;
}
