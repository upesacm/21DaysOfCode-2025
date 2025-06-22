#include<iostream>
#include<vector>
using namespace std;

bool validPalindrome(vector<int> &arr)
{
    for(int i=0 ; i<arr.size() ; i++)
    {
        if(arr[i] != arr[arr.size()-i-1])
        return false;
    }

    return true;
}


int main()
{
    vector<int> arr={1,2,3,2,1};

    //vector<int> arr={1,2,3,4};

    cout << "Is the given array a Palindrome: " <<  (validPalindrome(arr) ? "true" : "false") << endl;

    return 0;
}