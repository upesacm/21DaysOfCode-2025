#include <stdio.h>
int main()
{
    int n;
    printf("size of an array:");
    scanf("%d", &n);

    int nums[n];

    printf("enter %d integer numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            nums[i] = 0;
        }
    }
    printf("updated array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}
