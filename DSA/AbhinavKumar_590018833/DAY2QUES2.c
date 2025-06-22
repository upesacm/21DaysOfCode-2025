#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int areArraysEqual(int nums1[], int nums2[], int n1, int n2)
{
    if (n1 != n2)
        return 0;

    qsort(nums1, n1, sizeof(int), compare);
    qsort(nums2, n2, sizeof(int), compare);

    for (int i = 0; i < n1; i++)
    {
        if (nums1[i] != nums2[i])
            return 0;
    }
    return 1;
}
int main()
{
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {4, 3, 2, 1};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    if (areArraysEqual(nums1, nums2, n1, n2))
        printf("Output: true\n");
    else
        printf("Output: false\n");
    int a[] = {1, 2, 2, 3};
    int b[] = {1, 2, 3, 3};
    printf("Output: %s\n", areArraysEqual(a, b, 4, 4) ? "true" : "false");

    int c[] = {1, 2, 3};
    int d[] = {1, 2, 3, 4};
    printf("Output: %s\n", areArraysEqual(c, d, 3, 4) ? "true" : "false");

    return 0;
}
