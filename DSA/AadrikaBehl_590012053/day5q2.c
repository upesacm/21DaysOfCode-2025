#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array (excluding the missing one): ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements (from 0 to %d with one missing):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int expected_sum = (n * (n + 1)) / 2;  
    int actual_sum = 0;
    for (int i = 0; i < n; i++)
        actual_sum += arr[i];

    printf("Missing number is: %d\n", expected_sum - actual_sum);
    return 0;
}
