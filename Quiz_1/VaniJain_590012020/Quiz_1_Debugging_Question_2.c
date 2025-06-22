Tasks:
1. Identify the bug in the above implementation 

2. What kind of incorrect behavior or result might it produce? 

3. Rewrite the corrected version of the function   


Task 1
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



Task 2
The variable max is declared but not initialized.In C, local variables are not automatically initialized and may contain garbage values (random values left in memory).Therefore, the condition if (arr[i] > max) may never be true, especially if max starts with a large garbage value.

Task3 
int findMax(int arr[], int n) 
{
    // Handle edge case: empty array
    if (n <= 0) 
    {
       return -1;
    }
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
