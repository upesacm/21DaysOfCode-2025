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
bool increasingg(vector<int>& nums) {
    if (nums.size() <= 1) {
        return true;
    }
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] <= nums[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> nums;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    bool result = increasingg(nums);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
