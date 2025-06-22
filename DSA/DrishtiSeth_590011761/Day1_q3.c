
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
