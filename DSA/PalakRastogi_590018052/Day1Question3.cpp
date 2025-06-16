#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> &arr)
{
    int sumElement=0;

    for(int i=0;i<arr.size();i++)
    {
        sumElement+=arr[i];
    }

    return sumElement;
}

int main()
{
    //vector<int> arr={1,2,3,4,5};

    vector<int> arr={10,20,30};

    cout << "Sum of elements present in  the array is: " << sum(arr);

    return 0;
}