// Q3. Corrected Code
int findMax(int arr[], int n)
{
    int max = arr[0];  // By default the first element is considered the max
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

/*
Q1. Identify the bug in the above implementation.
-> The initial max element must be the first one.

Q2. What kind of incorrect behavior or result might it produce?
-> It will return 0 for all negative numbers array.
*/
