#include <stdio.h>

int Unique(int arr[], int size) 
{
    int result = 0;
    for (int i = 0; i < size; i++) 
    {
        result ^= arr[i]; // XOR all elements
    }
    return result;
}
int main() 
{
    int size;
    printf("Enter the size of the array (must be odd): ");
    scanf("%d", &size);
    if (size % 2 == 0) 
    {
        printf("Error: Size must be odd for this problem.\n");
        return 1;
    }
    int arr[size];
    printf("Enter %d integers (each number except one appears exactly twice):\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int unique = Unique(arr, size);
    printf("The element that appears only once is: %d\n", unique);
    return 0;
}
