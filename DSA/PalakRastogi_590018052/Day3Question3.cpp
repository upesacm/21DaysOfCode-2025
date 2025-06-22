#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int secondLargest(vector<int>& arr)
{
    sort(arr.begin(), arr.end());  // Sort in ascending order

    int maximum = arr[arr.size() - 1];  // Last element is the largest after sorting

    int ans = -1;

    // Traverse from second last to first to find the first number < max
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] < maximum)
        {
            ans = arr[i];
            break;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    cout << secondLargest(arr);  // Output: 40
}
