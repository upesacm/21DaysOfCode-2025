#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0) 
    {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of steps to rotate): ");
    scanf("%d", &k);
    if(k < 0) 
    {
        printf("k must be non-negative.\n");
        return 1;
    }

    if(n == 1 || k == 0) 
    {
        printf("Rotated array: ");
        for(int i = 0; i < n; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }

    k = k % n;
    int *temp = (int*)malloc(n * sizeof(int));
    if(temp == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) 
    {
        temp[(i + k) % n] = arr[i];
    }

    printf("Rotated array: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", temp[i]);
    }
    printf("\n");

    free(temp);
}