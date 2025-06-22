#include <stdio.h>
#define MAX 1000
int main()
{
    int n;
    printf("size of an array:");
    scanf("%d", &n);
    int k;
    printf("enter value of k:");
    scanf("%d", &k);

    int arr[n];
    printf("enter %d elements:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (count[i] == k)
        {
            sum += i;
        }
    }
    printf("sum of elements appears %d times:%d", k, sum);
    return 0;
}