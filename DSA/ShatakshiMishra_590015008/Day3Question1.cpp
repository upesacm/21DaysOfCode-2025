#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    unordered_map<int,int> f;
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
        f[nums[i]]++;
    }
    int k;
    cin >> k;
    
    int sum = 0;
    for (auto &pair : f) 
    {
        if (pair.second == k) 
        sum += pair.first;
    }

    cout << sum << endl;
}
