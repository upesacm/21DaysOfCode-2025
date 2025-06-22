/*  1 : 
# The variable max is declared but not initialized so it will hold the garbage value
*/

/*  2 : 
# because max hold garbage value which can be a big no. so 
it can change the output of the condition (arr[i] > max)
*/

// 3 : 

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
