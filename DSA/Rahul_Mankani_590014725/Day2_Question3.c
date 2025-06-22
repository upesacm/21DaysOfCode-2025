#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int size) 
{
    for(int i = 0; i < size-1; i++) 
    {
        for(int j = 0; j < size-i-1; j++) 
        {
            if(arr[j] > arr[j+1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() 
{
    int n1, n2;
    printf("Enter the size of the first array: ");//First array
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d numbers for the first array:\n", n1);
    for(int i = 0; i < n1; i++) 
    {
        printf("Number %d: ", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of the second array: ");//Second array
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d numbers for the second array:\n", n2);
    for(int i = 0; i < n2; i++) 
    {
        printf("Number %d: ", i+1);
        scanf("%d", &arr2[i]);
    }
    if(n1 != n2) //size ki equality dekhni ke liye
    {
        printf("Arrays are not equal\n");
        return 0;
    }
    bubbleSort(arr1, n1);
    bubbleSort(arr2, n2);// dono arrays ko sort kar diya
    bool equal = true;//ab dono sorted arrays ko compare kar liya
    for(int i = 0; i < n1; i++) 
    {
        if(arr1[i] != arr2[i]) 
        {
            equal = false;
            break;
        }
    }
    if(equal) 
    {
        printf("Arrays are equal\n");
    } 
    else 
    {
        printf("Arrays are not equal\n");
    }
    return 0;
}
