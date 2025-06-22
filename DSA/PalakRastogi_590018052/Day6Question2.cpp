#include<iostream>
#include<vector>
using namespace std;

bool increasing(vector<int>&arr)
{
    for(int i=0 ; i<arr.size()-1 ; i++)
    {
        if(arr[i] >= arr[i+1])
        return false;
    }

    return true;
}

int main()
{
    //vector<int> arr={1,2,3,4};

    vector<int> arr={1,2,2,4};

    cout << "Is the array increasing? " << (increasing(arr) ? "true" : "false");

    return 0;
}