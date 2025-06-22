#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int uniqueElement(vector<int> &arr)
{
    sort(arr.begin(),arr.end());

    for(int i=0 ; i<arr.size()-1 ; i+=2)
    {
        if(arr[i]!=arr[i+1])
        return arr[i];
    }

    return arr[arr.size()-1];//If all pairs match then last element is the unique element
}


int main()
{
    //vector<int> arr={2,2,1};

    vector<int> arr= {4, 1, 2, 1, 2};

    cout << "unique element present in the array is: " <<uniqueElement(arr);

    return 0;
}