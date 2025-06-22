#include <stdio.h>
int main()
{
    int n;
    printf("size of an array:");
    scanf("%d", &n);

    int arr[n];
    int first;
    int last;
    printf("enter %d elements:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        first = arr[0];
        last = arr[n - 1];
    }
    printf("First element of an array:%d\n", first);
    printf("Last element of an array:%d", last);
    return 0;
}