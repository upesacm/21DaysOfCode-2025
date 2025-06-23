#include<iostream>
#include<algorithm>
#include<vector>
#include<bitset>
#include<set>
#include<climits>
#include<ctime>
#include<map>
#include<unordered_map>
#include<cstdlib>
#include<string>
#include<queue>
using namespace std;
int duplicate(vector<int>& nums) {
    int s = nums[0];
    int f = nums[0];
    do {
        s = nums[s];
        f = nums[nums[f]];
    } while (s != f);
    s = nums[0];
    while (s != f) {
        s = nums[s];
        f = nums[f];
    }
    return f;
}


int main() {
    int n; 
    cin >> n;
    n = n - 1; 
    
    vector<int> nums(n + 1);
    for (int i = 0; i < n + 1; ++i) {
        cin >> nums[i];
    }
    
    
    int result = duplicate(nums); 
    cout << result << endl;
    
    return 0;
}
