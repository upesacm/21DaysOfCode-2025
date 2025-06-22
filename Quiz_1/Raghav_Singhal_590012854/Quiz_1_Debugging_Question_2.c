#include<stdio.h>
int findMax(int arr[], int n) 
{
    int max=arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
       {
            max = arr[i];
        }
    }
    return max;
}
void main()
{
    int a[]={1,2,3,4,5};
    printf("%d",findMax(a,5));
}