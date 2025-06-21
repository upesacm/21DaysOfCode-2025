#include <stdio.h>
int findDuplicate(int arr[], int size)
{
    int n = size - 1;
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for (int i = 0; i < size; i++)
    {
        actual_sum += arr[i];
        ;
    }
    return actual_sum - expected_sum;
}
int main()
{
    int n;
    printf("size of an array:");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int duplicate = findDuplicate(arr, size);
    printf("Duplicate number:%d\n", duplicate);

    return 0;
}