#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int sum(vector<int>&arr,int frequency)
{
    sort(arr.begin(),arr.end());

    vector<pair<int,int>> freq;

    int count=1;

    int sum=0;


    for (int i=0; i<arr.size()-1; i++)
    {
        if(arr[i+1]==arr[i])
        {
            count++;
        }

        else
        {
            freq.push_back({arr[i],count});
            count=1;
        }
    }

    freq.push_back({arr[arr.size()-1],count});

    for(auto p : freq)
    {
        if(p.second == frequency)
        {
            sum+=p.first;
        }
    }

    return sum;
}


int main()
{
    //vector<int> arr={2,3,9,9};
    vector<int> arr={1,8,8,8,5,6,2};
    int k=3;

    int ans=sum(arr,k);

    cout << "Sum of elements whose frequency is " << k << " is: " << ans;

    return 0;
}