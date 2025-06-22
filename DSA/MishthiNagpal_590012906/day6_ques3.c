#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 1;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1] + 1)
        {
            count++;
            if (count > max)
                max = count;
        }
        else
        {
            count = 1;
        }
    }

    printf("Longest length of increasing by 1: %d\n", max);
    return 0;
}
