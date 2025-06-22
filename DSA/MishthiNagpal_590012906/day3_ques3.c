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
    int is_unique[n];
    for (int i = 0; i < n; i++)
    {
        is_unique[i] = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                is_unique[i] = 0;
                break;
            }
        }
    }
    int largest = -1, second = -1;
    for (int i = 0; i < n; i++)
    {
        if (is_unique[i])
        {
            if (arr[i] > largest)
            {
                second = largest;
                largest = arr[i];
            }
            else if (arr[i] > second && arr[i] < largest)
            {
                second = arr[i];
            }
        }
    }
    if (second == -1)
    {
        printf("-1");
    }
    else
    {
        printf("second largest element:%d", second);
        return 0;
    }
}
