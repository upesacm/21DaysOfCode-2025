#include <stdio.h>

int remove(int arr[], int size, int val) 
{
    int k = 0;    
    for(int i = 0; i < size; i++) 
    {
        if(arr[i] != val) 
        {
            arr[k] = arr[i];
            k++;
        }
    }
    return k;
}
int main() 
{
    int n, val;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if(n <= 0) 
    {
        printf("Please enter a valid size (greater than 0)\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }    
    printf("Enter the value to remove: ");
    scanf("%d", &val);    
    int newLength = remove(arr, n, val);    
    printf("New array length: %d\n", newLength);
    printf("Array after removing %d: ", val);
    for(int i = 0; i < newLength; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
