#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int nums[n];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
        sum+=nums[i];
    }
    int actual_sum = (n*(n+1))/2;
    
    cout << actual_sum-sum;
}
