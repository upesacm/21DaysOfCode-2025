#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool duplicate(vector<int>&arr)
{
    sort(arr.begin(),arr.end());

    for(int i=0; i<arr.size()-1; i++)
    {
        if(arr[i+1]==arr[i])
        return true;
    }

    return false;
}


int main()
{
    //vector<int> arr={1,2,3,4};

    vector<int> arr={1,2,3,2};

    if(duplicate(arr))
    {
        cout << "true";
        return 0;
    }

    cout << "false";
    return 0;
}