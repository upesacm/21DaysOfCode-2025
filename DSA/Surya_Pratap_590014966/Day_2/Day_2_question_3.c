#include <stdio.h>
#include <stdbool.h>

void areEqual(int[], int[], int);

int main()
{
    int nums1[] = {1, 2, 2, 3};
    int nums2[] = {3, 2, 2, 1};
    int size = sizeof(nums1) / sizeof(nums1[0]);

    areEqual(nums1, nums2, size);

    return 0;
}

void areEqual(int a[], int b[], int n)
{
    int visited[100] = {0};

    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (!visited[j] && a[i] == b[j])
            {
                visited[j] = 1;
                found = true;
                break;
            }
        }
        if (!found)
            printf("false\n");
    }

    printf("true\n");
}