#include<iostream>
#include<vector>
using namespace std;


int subarrayLength(vector<int> &arr)
{
    int max_length=1;

    int current_length=1;

    for(int i=0 ; i<arr.size()-1 ; i++)
    {
        if(arr[i] < arr[i+1])
        {
            current_length++;
            max_length=max(max_length,current_length);
        }

        else
        {
            current_length=1;
        }
        
    }

    return max_length;
}


int main()
{
    vector<int> arr={1,2,2,3,4,1,2,3,4,5};
 
    cout << "Maximum length of the longest contiguous subarray with consecutive increasing elements is: " << subarrayLength(arr) << endl;

    return 0;
}