#include <stdio.h>
int findMax(int arr[], int n) 
{
    int max=arr[0];
    for (int i=1;i<n;i++) 
    {
        if (arr[i]>max) 
        {
            max=arr[i]; 
        }
    }
    return max;
}
int main() 
{
    int numbers[]={15, 29, 3, 87, 42, 8};
    int size=sizeof(numbers)/sizeof(numbers[0]);
  
    int maxValue = findMax(numbers, size);
    printf("The maximum value in the array is: %d\n", maxValue);
    return 0;
}
