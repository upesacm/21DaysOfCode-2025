#include <iostream>
#include <vector>
using namespace std;
vector<int> zero(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < 0) {
            nums[i] = 0;
        }
    }
    return nums;
}
int main() {
    vector<int> nums = {3, -1, 5, -7, 9, 0, -4};
    vector<int> m = zero(nums);
    cout << "ans ";
    for (int i = 0; i < m.size(); i++) {
        cout << m[i] << " ";
    }
    cout << endl;
    return 0;
}