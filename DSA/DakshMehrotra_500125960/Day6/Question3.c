#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Invalid size. Make Size > 0.\n");
        return 1;
    }
    if (n == 0) 
    {
        printf("Length of longest contiguous increasing subarray: 0\n");
        return 0;
    }

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int maxLen = 1, currLen = 1;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > arr[i-1]) 
        {
            currLen++;
            if (currLen > maxLen)
                maxLen = currLen;
        } 
        else 
        {
            currLen = 1;
        }
    }

    printf("Length of longest contiguous increasing subarray: %d\n", maxLen);
    return 0;
}