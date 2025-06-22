int findMax(int arr[], int n) 
{
    int max = arr[0];   

    for (int i = 1; i < n; i++)  
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    return max;
}

Bug:
max is not initialized so it holds garbage value.

What incorrect behavior or result might it produce?
The function may return a wrong or random value because max starts uninitialized. 
If max initially holds a value larger than any array element, the maximum won’t update, leading to an incorrect result.
