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
[?] Identify the bug in the above implementation.
-> The initial max element must be the first one.

[?] What kind of incorrect behavior or result might it produce?
-> It will return 0 for all negative numbers array.
*/
