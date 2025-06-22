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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("True");
                return 0;
            }
        }
    }
    printf("False");
    return 0;
}