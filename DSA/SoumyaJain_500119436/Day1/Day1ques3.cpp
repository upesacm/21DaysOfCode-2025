#include <iostream>
#include <vector>
using namespace std;

int CalculateSum(const vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return sum;
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

    int sum = CalculateSum(nums);
    cout << "Sum of the elements: " << sum << endl;

    return 0;
}