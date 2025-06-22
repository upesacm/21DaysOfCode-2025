/* Question1
 the max variable will is declared but not initialized which is important as variable will contain garbage value which can be greater then the no. are less then the no. 

Question2 
 if max has a very large garbage value, no element in the array will be greater than it, and none of the conditions will trigger. So the function might return that garbage value instead of the actual maximum.

/This leads to undefined behavior — dangerous and incorrect results.
Question3
 correct version of code 
*/
int findMax(int arr[], int n)
{
    int max = arr[0];  // Initialize max to the first element

    for (int i = 1; i < n; i++)  
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
