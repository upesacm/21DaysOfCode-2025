#include <stdio.h>

void sumEven(int[], int);

int main()
{
    int arr[6] = {1, 4, 5, 3, 6, 4};
    int length = sizeof(arr) / sizeof(arr[0]);

    sumEven(arr, length);

    return 0;
}

void sumEven(int arr[], int length)
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }

    printf("%d", sum);
}