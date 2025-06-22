#include <iostream>
#include <vector>
using namespace std;

int longestConsecutiveIncreasingSubarray(vector<int>& nums) {
    if (nums.empty()) return 0;
    int maxLength = 1;
    int currentLength = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1] + 1) {
            currentLength++;
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        } else {
            currentLength = 1;
        }
    }
    return maxLength;
}

int main() {
    vector<int> nums = {1, 2, 3, 5, 6, 7, 8, 1, 2};
    cout << "Length of longest consecutive increasing subarray: " << longestConsecutiveIncreasingSubarray(nums) << endl;
    return 0;
}

