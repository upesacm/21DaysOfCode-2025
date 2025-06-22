//1.The variable max is declared but not initialized.
//2.The comparison arr[i] > max may never be true, even when arr[i] contains valid values. It may skip updating max, returning garbage or wrong value.
//3.
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
