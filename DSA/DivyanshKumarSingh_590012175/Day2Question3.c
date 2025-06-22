#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool areEqual(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    if (nums1Size != nums2Size)
    {
        return false;
    }

    int maxNum = 0;
    for (int i = 0; i < nums1Size; i++)
    {
        if (nums1[i] > maxNum)
        {
            maxNum = nums1[i];
        }
        if (nums2[i] > maxNum)
        {
            maxNum = nums2[i];
        }
    }

    int *freq1 = (int *)calloc(maxNum + 1, sizeof(int));
    int *freq2 = (int *)calloc(maxNum + 1, sizeof(int));

    for (int i = 0; i < nums1Size; i++)
    {
        freq1[nums1[i]]++;
        freq2[nums2[i]]++;
    }

    for (int i = 0; i <= maxNum; i++)
    {
        if (freq1[i] != freq2[i])
        {
            free(freq1);
            free(freq2);
            return false;
        }
    }

    free(freq1);
    free(freq2);
    return true;
}

int main()
{
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    int *nums1 = (int *)malloc(size1 * sizeof(int));
    if (nums1 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &nums1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int *nums2 = (int *)malloc(size2 * sizeof(int));
    if (nums2 == NULL)
    {
        printf("Memory allocation failed.\n");
        free(nums1);
        return 1;
    }

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &nums2[i]);
    }

    bool res = areEqual(nums1, size1, nums2, size2);
    printf(res ? "true\n" : "false\n");

    free(nums1);
    free(nums2);
    return 0;
}