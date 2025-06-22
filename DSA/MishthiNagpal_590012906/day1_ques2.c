#include <stdio.h>
int main()
{
    int n;
    printf("size of array:");
    scanf("%d", &n);

    int set[n];
    int count[n + 1];
    for (int i = 0; i <= n; i++)
    {
        count[i] = 0;
    }
    printf("enter %d numbers:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &set[i]);
        count[set[i]]++;
    }

    int missing = 0, repeating = 0;
    for (int i = 1; i <= n; i++)
    {
        if (count[i] == 0)
        {
            missing = i;
        }
        else if (count[i] == 2)
        {
            repeating = i;
        }
    }
    printf("Repeating number = %d\n", repeating);
    printf("Missing number = %d\n", missing);

    return 0;
}