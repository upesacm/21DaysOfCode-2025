int findMax(int arr[], int n) 
{
    int max=arr[0];                                        //max initialised from the first element of the array to fix a starting point of comparison
    for (int i = 0; i < n; i++)                           
    { 
        if (arr[i] > max) 
       {
            max = arr[i];
        }
    }
    return max;
}
//if max isn't initialised correctly, it will result in garbage values
