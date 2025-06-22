#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool arrEqual(vector<int> &arr1, vector<int> &arr2)
{
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    if(arr1.size()!=arr2.size())
    return false;

    for(int i=0; i<arr1.size(); i++)
    {
        if(arr1[i]!=arr2[i])
        return false;
    }

    return true;
}


int main()
{
    vector<int> arr1={1,2,3,4};

    //vector<int> arr2={3,4,2,1};

    vector<int> arr2={1,2,3};

    if(arrEqual(arr1,arr2))
    {
        cout << "true";

        return 0;
    }

    cout << "false";
    return 0;

}