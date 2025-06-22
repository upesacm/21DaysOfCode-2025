#include <stdio.h>
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
    int k;
    printf("enter the value of k:");
    scanf("%d", &k);
    k = k % n;
    int rotated[n];
    for (int i = 0; i < n; i++)
    {
        rotated[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = rotated[i];
    }

    printf("updated elements:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}