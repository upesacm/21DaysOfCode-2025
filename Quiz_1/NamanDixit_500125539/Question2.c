1. Bug-  if (arr[i] > max) 
       {
            max = arr[i];
2. incorrect behavior:-
  Enter length of array: 4
Enter elements of array: 5
3
2
4
Max: 6356676

3- Updated code:-
  
#include<stdio.h>
int findMax(int arr[], int n) 
{
    int max=0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < arr[i+1]) 
       {
            max = arr[i];
        }
    }
    return max;
}
int main() 
{
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    
    // Optional: Validate input to ensure n is non-negative
    if (n < 0) {
        printf("Invalid array size\n");
        return 1;
    }
    
    int nums[n];
    printf("Enter elements of array: ");
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int a = findMax(nums, n);
    printf("Max: %d\n", a);

    return 0;
}
