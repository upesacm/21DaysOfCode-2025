#include<iostream>
#include<vector>
using namespace std;

bool replaceNegative(vector<int>&arr)
{
    int n=arr.size();
    bool changes=false;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr[i]=0;
            changes=true;
        }
    }

    return changes;
}

int main()
{
    //vector<int>arr={-1,2,-3,4,5};

    //vector<int>arr={0,-5,-10};

    vector<int>arr={1,2,3,4};

    if(replaceNegative(arr))
    {
        cout << "Modified array" << endl;

        for(int i=0;i<arr.size();i++)
        {
        cout << arr[i] << " ";
        }
    }

    else
    {
        cout << "There was no negative element in the array" << endl;

        for(int i=0;i<arr.size();i++)
        {
        cout << arr[i] << " ";
        }
    }

    return 0;
}