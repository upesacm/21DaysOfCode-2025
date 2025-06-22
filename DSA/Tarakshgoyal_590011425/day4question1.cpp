#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMinimum(vector<int>& nums) {
    if (nums.empty()) {
        cout << "Array is empty!" << endl;
        return INT_MAX;
    }

    int minElement = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] < minElement) {
            minElement = nums[i];
        }
    }
    return minElement;
}

int main() {
    vector<int> nums = {12, 5, 8, 2, 19, 7};
    int minValue = findMinimum(nums);
    cout << "Minimum element in the array is: " << minValue << endl;
    return 0;
}
