#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int> &arr,int size,int n)
{
    int count=1;
    
    sort(arr.begin(),arr.end());
    vector<int>occurence;

    int i=0;
    for(;i<arr.size()-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else 
        {
            if(count>1)
            {
                occurence.push_back(arr[i]);
            }
            count=1;
        }

    }

    if(count>1)
    {
        occurence.push_back(arr[i]);
    }
    return occurence;
}
int main()
{
   vector<int>arr={1,3,4,2,2};

   vector<int> result=findDuplicates(arr,arr.size(),5);

   cout << "Number which occur twice is:" << endl;
   for(int i=0;i<result.size();i++)
   {
    cout << result[i] <<" ";
   }
   return 0;
}