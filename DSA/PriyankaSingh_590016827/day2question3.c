#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

bool areArraysEqual(int arr1[], int size1, int arr2[], int size2) 
{
    // Defining if sizes are different, arrays can't be equal
    if (size1 != size2) 
    {
        return false;
    }

    // Creating frequency maps for both arrays
    int freq1[MAX_SIZE] = {0};
    int freq2[MAX_SIZE] = {0};

    // Counting frequencies in first array
    for (int i = 0; i < size1; i++) 
    {
        freq1[arr1[i]]++;
    }

    // Counting frequencies in second array
    for (int i = 0; i < size2; i++) {
        freq2[arr2[i]]++;
    }

    // Comparing frequencies
    for (int i = 0; i < MAX_SIZE; i++) 
    {
        if (freq1[i] != freq2[i]) 
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    int size1, size2;
    int arr1[MAX_SIZE], arr2[MAX_SIZE];

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements for first array:\n", size1);
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements for second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Checking if arrays are equal
    if (areArraysEqual(arr1, size1, arr2, size2)) 
    {
        printf("The arrays contain the same elements with the same frequencies.\n");
    } 
    else 
    {
        printf("The arrays do NOT contain the same elements with the same frequencies.\n");
    }

    return 0;
}