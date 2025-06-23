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
int longestt(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }
    int max_length = 1;
    int current_length = 1;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1] + 1) {
            current_length++;
            if (current_length > max_length) {
                max_length = current_length;
            }
        } else {
            current_length = 1;
        }
    }
    return max_length;
}

int main() {
    vector<int> nums;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int result = longestt(nums);
    cout <<result << endl;
    return 0;
}
