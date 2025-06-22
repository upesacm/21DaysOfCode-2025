#include <stdio.h>

int findmiss(int arr[], int n) {
    for (int i = 0; i <= n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (i == arr[j]) {
                break;
            }
        }
        if (j == n) {  
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Eneter the number of element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int miss = findmiss(arr, n);
    printf("The missing element is %d ", miss);
}
