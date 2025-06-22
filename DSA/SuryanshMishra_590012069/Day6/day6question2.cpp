#include <iostream>
#include <vector>
using namespace std;

bool isIncreasing(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n - 1; i++) {
        if(nums[i] >= nums[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> num = {1, 2, 2, 4};
    cout << (isIncreasing(num) ? "true" : "false") << endl;
    return 0;
}