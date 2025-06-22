//The variable max is not initialized
//max could contain a garbage value, comparisons arr[i] > max will always be false. unpredictable value
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
