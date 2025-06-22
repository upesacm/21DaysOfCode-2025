#include <stdio.h>
void findMissingAndRepeated(int arr[], int n) 
{
    int freq[n+1];  
    for(int i = 0; i <= n; i++) 
    {
        freq[i] = 0;
    }
    for(int i = 0; i < n; i++) 
    {
        freq[arr[i]]++;
    }

    int repeated = -1, missing = -1;
    for(int i = 1; i <= n; i++) 
    {
        if(freq[i] == 0) 
        {
            missing = i;
        } 
        else if(freq[i] == 2) 
        {
            repeated = i;
        }
    }

    printf("Repeated number: %d\n", repeated);
    printf("Missing number: %d\n", missing);
}

int main() 
{
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findMissingAndRepeated(arr, n);
    return 0;
}
