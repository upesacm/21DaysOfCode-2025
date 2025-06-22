#include <stdio.h>

int main() {
    int arr[100];
    int n, result = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        result += arr[i];
    }

    printf("Sum of elements: %d\n", result);

    return 0;
}
