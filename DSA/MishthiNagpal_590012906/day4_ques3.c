#include <stdio.h>
int removeElement(int arr[], int n, int val)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != val)
        {
            arr[i] = arr[j];
            i++;
        }
    }
    return i;
}
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
    int val;
    printf("enter value of val:");
    scanf("%d", &val);
    int newLength = removeElement(arr, n, val);

    printf("New length: %d\n", newLength);

    return 0;
}