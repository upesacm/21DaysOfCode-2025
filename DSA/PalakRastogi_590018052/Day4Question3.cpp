#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void removeOccurence(vector<int> &arr, int val)
{
    sort(arr.begin(),arr.end());

    int index=0;

    int i=0;

    for(; i<arr.size(); i++)
    {
        if(arr[i]>val)
        {
            arr[index++]=arr[i];
        }
    }

    arr.resize(index);
}

int main()
{
    vector<int> arr={3,2,2,3};

    removeOccurence(arr,2);

    cout << "New Size of an Array after removing all the occurences of 2: "  << arr.size() << endl;

    return 0;


}