#include <stdio.h>
#include <stdlib.h>

void findNumbers(int *arr, int n, int *missing, int *twice) 
{
    int *count = (int *)malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) 
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) 
    {
        count[arr[i]]++;
    }

    for (int i = 1; i <= n; i++) 
    {
        if (count[i] == 0) {
            *missing = i;
        } 
        else if (count[i] == 2) 
        {
            *twice = i;
        }
    }

    free(count);
}

int main() 
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter numbers: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int missing, twice;
    findNumbers(arr, n, &missing, &twice);

    printf("Missing: %d, Twice: %d\n", missing, twice);

    free(arr);
    return 0;
}
