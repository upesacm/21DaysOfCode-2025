#include <stdio.h>
#define MAX 1000
int main()
{
    int n1;
    int n2;
    printf("size of array1:");
    scanf("%d", &n1);
    printf("size of array2:");
    scanf("%d", &n2);
    if (n1 != n2)
    {
        printf("false");
        return 0;
    }
    int arr1[n1];
    int arr2[n2];
    int count1[MAX] = {0}, count2[MAX] = {0};
    printf("enter %d elements for array1:", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
        count1[arr1[i]]++;
    }
    printf("enter %d elements for array2:", n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
        count2[arr2[i]]++;
    }
    for (int i = 0; i < MAX; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("false\n");
            return 0;
        }
    }
    printf("true");
    return 0;
}