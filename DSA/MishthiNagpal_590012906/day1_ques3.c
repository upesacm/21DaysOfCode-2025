#include <stdio.h>
int main()
{
    int n;
    printf("size of an array:");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;
    printf("enter %d elements:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the elemnts:%d", sum);
    return 0;
}