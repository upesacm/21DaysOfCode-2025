#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int findMin(vector<int>& arr)
{
    int minimum = arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] < minimum)
            minimum = arr[i];
    }
    return minimum;
}

int main()
{
    vector<int> arr = {5, 5, 5};
    cout << "Minimum element present in the array is: " << findMin(arr);
    return 0;
}
