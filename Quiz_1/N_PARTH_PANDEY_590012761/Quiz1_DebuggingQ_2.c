//Bug:
//The variable max is not initialized before comparing it with elements of the array.

//Incorrect behavior might produce incorrect value:
/* Because max starts with an undefined value:
If max accidentally has a very large garbage value, none of the array elements will be greater than it.
As a result, the function may return garbage or incorrect minimum values. */

//Corrected version:
int findMax(int arr[], int n) 
{
    int max = arr[0];  // Initialize with the first element

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}
