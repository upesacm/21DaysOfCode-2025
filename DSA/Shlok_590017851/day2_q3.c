#include <stdio.h>
#include <stdbool.h>
bool areArraysEqual(int arr1[], int arr2[], int n)
{
    int matched[n];
    for (int i = 0; i < n; i++) 
    {
        matched[i] = 0;  
    }

    for (int i = 0; i < n; i++) 
    {
        bool found = false;
        for (int j = 0; j < n; j++) 
        {
            if (arr1[i] == arr2[j] && !matched[j])
            {
                matched[j] = 1;
                found = true;
                break;
            }
        }
        if (!found) return false;
    }

    return true;
}

int main() 
{
    int arr1[] = {3, 1, 2, 2};
    int arr2[] = {2, 3, 2, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    if (areArraysEqual(arr1, arr2, n))
    {
        printf("Arrays are equal in elements and frequency.\n");
    } 
    else
    {
        printf("Arrays are NOT equal.\n");
    }
    return 0;
}
