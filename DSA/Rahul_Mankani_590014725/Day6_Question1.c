#include <stdio.h>
#define MAX_SIZE 100

int Duplicate(int arr[], int size) 
{
    int count[MAX_SIZE] = {0};
    
    for (int i = 0; i < size; i++) 
    {
        count[arr[i]]++; 
        if (count[arr[i]] > 1) 
        { 
            return arr[i];
        }
    }
    return -1;
}
int main() 
{
    int n;
    int arr[MAX_SIZE];    
    printf("Enter the value of n (array will have n+1 elements, max %d): ", MAX_SIZE-1);
    scanf("%d", &n);
    if (n < 1 || n >= MAX_SIZE) 
    {
        printf("Please enter a number between 1 and %d.\n", MAX_SIZE-1);
        return 1;
    }    
    printf("Enter %d numbers between 1 and %d:\n", n + 1, n);
    for (int i = 0; i < n + 1; i++) 
    {
        scanf("%d", &arr[i]);        
        if (arr[i] < 1 || arr[i] > n) 
        {
            printf("Number must be between 1 and %d. Try again.\n", n);
            i--;
        }
    }    
    int duplicate = Duplicate(arr, n + 1);
    printf("One duplicate number is: %d\n", duplicate);
    return 0;
}
