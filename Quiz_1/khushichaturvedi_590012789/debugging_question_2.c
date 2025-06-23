Tasks:
1. Identify the bug in the above implementation 
2. What kind of incorrect behavior or result might it produce? 
3. Rewrite the corrected version of the function

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
    return max;
}
