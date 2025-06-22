#include <stdio.h>

int ArraySum(int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    return sum;
}
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Error: Array size must be a positive number!\n");
        return 1;
    }
    int arr[100]; // Max size 100 liya hai
    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = ArraySum(arr, n);
    printf("\nSum of array elements: %d\n", sum);
    printf("Your array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
