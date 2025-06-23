
/* Original Code
int findMax(int arr[], int n) 
{
    int max;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
       {
            max = arr[i];
        }
    }
    return max;
}
*/
//T1 Bug = We did not intialise max with anything so , it will contain a grabage value and can give us the wrong output.
//T2 It would have given us undefined Behavior .
//T3 New code
int findMax(int arr[], int n) 
{
    int max=arr[0];
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
       {
            max = arr[i];
        }
    }
    return max;
}
