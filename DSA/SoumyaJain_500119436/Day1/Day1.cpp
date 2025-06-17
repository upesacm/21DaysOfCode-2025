#include <iostream>
#include <vector>
using namespace std;

vector<int> replaceNegativesWithZero(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < 0) {
            nums[i] = 0;
        }
    }
    return nums;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = replaceNegativesWithZero(nums);

    cout << "Modified array: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
