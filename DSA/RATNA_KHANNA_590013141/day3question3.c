#include <stdio.h>

int main()
{
    int i, n;
    printf("enter number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int r=0;
    int c=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]==c)
        r++;
    }
    if(r==n-1)
    {
    printf("-1\n");
    printf("all are equal\n");
    }
    else
    printf("second largest element is %d\n", arr[n - 2]);
    return 0;
}
