#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void missing_duplicate(vector<int> &arr)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());

    int twice=-1;

    int missing=-1;

    int i=0;

    for(; i<n-1 ; i++)
    {
        if(arr[i+1]==arr[i])
        {
            twice=arr[i];
        }

        else if (arr[i+1] - arr[i] > 1)
        {
            missing=arr[i] + 1;
        }
    }

    //For Boundary Case

    if(arr[0]!=1 && missing==-1)
    missing=1;

    else if(arr[n-1] != n && missing==-1)
    missing=n;

    cout << "Missing number is: " << missing << endl;
    cout << "Duplicate number: " << twice << endl;



}


int main()
{
   //vector<int>arr={3,1,3};

   vector<int> arr={4,3,6,2,1,1};

   missing_duplicate(arr);

   return 0;
}