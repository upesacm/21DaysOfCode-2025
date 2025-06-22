#include <iostream>
#include <vector>
using namespace std;

int removeValue(vector<int>& nums, int val) {
    int i = 0;
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newLength = removeValue(nums, val);
    cout << newLength << endl;

    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
