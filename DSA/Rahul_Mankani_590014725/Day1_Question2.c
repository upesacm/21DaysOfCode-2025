#include <stdio.h>
#include <stdlib.h>

void MissAndRept(int arr[], int n, int *repeated, int *missing) 
{
    for (int i = 0; i < n; i++) 
    {
        int num = abs(arr[i]); // abs use karke absolute value mil jaayegi agar number negative ho
        if (arr[num - 1] > 0) 
        {
            arr[num - 1] = -arr[num - 1];
        } 
        else 
        {
            *repeated = num;
        }
    }
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > 0) 
        { 
            *missing = i + 1;
            break;//ek missing number mil jaayega to loop break ho jaayega
        }
    }
    for (int i = 0; i < n; i++) 
    {
        arr[i] = abs(arr[i]);
    }
}
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Invalid size! Please enter a +ve number.\n");
        return 1;
    }
    int arr[100]; // Max size 100 le liya
    printf("Enter %d numbers (from 1 to %d, one repeated, one missing):\n", n, n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] < 1 || arr[i] > n) 
        {
            printf("Error: Numbers must be between 1 and %d. Try again.\n", n);
            return 1;
        }
    }
    int rept, miss;
    MissAndRept(arr, n, &rept, &miss);
    printf("\nResults:\n");
    printf("Repeated number: %d\n", rept);
    printf("Missing number: %d\n", miss);
    printf("Original array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
