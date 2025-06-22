#include <iostream>
#include <vector>
using namespace std;

bool isStrictlyIncreasing(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] <= nums[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9};
    cout << boolalpha << isStrictlyIncreasing(nums) << endl;
    return 0;
}
