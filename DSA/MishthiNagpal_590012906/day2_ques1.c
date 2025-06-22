#include <stdio.h>
int main()
{
    int n;
    printf("Size of an array:");
    scanf("%d", &n);

    int arr[n];
    int num;
    printf("enter %d numbers:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("sum of all even numbers:%d", sum);
    return 0;
}