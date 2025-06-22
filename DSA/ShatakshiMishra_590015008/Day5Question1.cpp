#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int nums[n];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
        mp[nums[i]]++;
    }
    
    for(auto num:mp)
    {
        if(num.second == 1)
        cout << num.first << endl;
    }
}
