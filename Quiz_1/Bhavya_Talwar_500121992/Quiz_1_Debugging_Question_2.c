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

// 1. variable max is uninitialized

// 2. If max contains a large garbage value the condition arr[i]>max may never be true and may end up returning random value.

// 3. Solution

// int findMax(int arr[], int n)
// {
//     int max=nums[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }