#include <stdio.h>
int main()
{
    int n;
    printf("size of an array:");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    printf("enter %d elements:(0 to %d)", n, n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total = n * (n + 1) / 2;
    int missing = total - sum;

    printf("Missing number:%d", missing);
    return 0;
}