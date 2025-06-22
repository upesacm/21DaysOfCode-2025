#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lengthSubarray(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    int maxLen = 1;
    int currentLen = 1;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[i - 1] + 1) {
            currentLen++;
            maxLen = max(maxLen, currentLen);
        }
        else {
            currentLen = 1;
        }
    }
    return maxLen;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
    cout << lengthSubarray(nums) << endl;
    return 0;
}