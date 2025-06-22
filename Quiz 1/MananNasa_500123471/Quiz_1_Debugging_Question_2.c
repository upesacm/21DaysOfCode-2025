//TASK 1
//int max; (line no 3) is wrong


//TASK 2
//If max holds a garbage value larger than any element in the array, then:
//The condition arr[i] > max will never be true, so max remains unchanged.
//The function may return a random incorrect value, not present in the array.


//TASK 3

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
