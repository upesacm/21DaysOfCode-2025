#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = INT_MIN, max2 = INT_MIN;

    for(i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    if(max2 == INT_MIN) {
        printf("Second largest unique element does not exist. Output: -1\n");
    } else {
        printf("Second largest unique element: %d\n", max2);
    }

    return 0;
}
